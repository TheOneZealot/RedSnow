import luxe.Component;

class DamageTouch extends Component
{
	public var damage:Float;

	public function new(args:Dynamic)
	{
		for (arg in Reflect.fields(args))
		{
			Reflect.setField(this, arg, Reflect.field(args, arg));
		}
	}

	override function onadded()
	{
		entity.events.listen("oncollision", ontouch);
	}

	function ontouch(e:Dynamic)
	{
		e.other.entity.events.fire("applydamage", {damage: damage});
	}
}