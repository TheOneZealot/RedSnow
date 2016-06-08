import luxe.Log.*;
import luxe.Vector;
import luxe.Sprite;
import luxe.Component;
import luxe.utils.Maths;
import luxe.components.sprite.SpriteAnimation;
import luxe.collision.shapes.Polygon;
import phoenix.Texture;

class Creature extends Sprite
{
	public static var creature_types(get, null):Map<String, CreatureData>;
	static var _creature_types:Map<String, CreatureData>;

	public var collider(get, null):DynamicShape;
	var _collider:DynamicShape;

	public var controller(get, null):DynamicController;
	var _controller:DynamicController;

	public function new(_id:String, _name:String, ?_pos:Vector = null, ?_ctrl:DynamicController = null)
	{
		var type = creature_types.get(_id);
		super({
			name: _name,
			texture: type.texture,
			size: type.size,
			pos: _pos == null ? new Vector() : _pos
		});
		if (type.animation != null)
		{
			var anim = add(new SpriteAnimation({name: "animation"}));
			anim.add_from_json_object(type.animation);
			anim.animation = "idle";
			anim.play();
		}
		if (type.components != null)
		{
			for (comp_data in type.components)
			{
				add(Type.createInstance(comp_data.name, comp_data.args));
			}
		}

		_collider = add(new DynamicShape(Polygon.rectangle(0, 0, type.bounds.x, type.bounds.y)));
		_controller = add(_ctrl == null ? new DynamicController() : _ctrl);

		Main.sim.dynamic_colliders.push(collider);
		depth = 1.1;
	}

	public static function load_creature_types()
	{
		_creature_types = new Map();

		var creatures_data = Luxe.resources.json("assets/entities/Creatures.json").asset.json;
		for (creature_data in Reflect.fields(creatures_data))
		{
			var creature = Reflect.field(creatures_data, creature_data);

			var texture = Luxe.resources.texture(creature.texture);
			texture.filter_mag = texture.filter_min = FilterType.nearest;

			_creature_types.set(creature_data, new CreatureData({
				id: creature_data,
				size: new Vector(creature.size.x, creature.size.y),
				bounds: new Vector(creature.size.x, creature.size.y),
				texture: texture,
				animation: creature.animation == null ? null : Luxe.resources.json(creature.animation).asset.json,
				components: cast(creature.components, Array<Dynamic>)
			}));
		}
	}

	public static function get_creature_types():Map<String, CreatureData>
	{
		assertnull(_creature_types, "creature types has not been loaded");
		return _creature_types;
	}

	public function get_collider():DynamicShape
	{
		return _collider;
	}

	public function get_controller():DynamicController
	{
		return _controller;
	}
}

class CreatureData
{
	public var id:String;
	public var size:Vector;
	public var bounds:Vector;
	public var texture:Texture;
	public var animation:Dynamic;
	public var components:Array<Dynamic>;

	public function new(data:Dynamic)
	{
		components = [];

		for (data_field in Reflect.fields(data))
		{
			var hasField:Bool = false;
			for (field in Type.getInstanceFields(Type.resolveClass("CreatureData")))
			{
				if (field == data_field)
				{
					hasField = true;
					break;
				}
			}
			assert(hasField, 'CreatureData has no field with name $data_field');
			if (hasField)
			{
				Reflect.setField(this, data_field, Reflect.field(data, data_field));
			}
		}
	}
}