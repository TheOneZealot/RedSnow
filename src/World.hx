import luxe.Log.*;
import luxe.Sprite;
import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;
import luxe.collision.shapes.Polygon;
import luxe.importers.tiled.TiledMap;
import luxe.importers.tiled.TiledObjectGroup;
import phoenix.Texture;

class World
{
    public var map:TiledMap;
    public var creatures:Dynamic;
    public var spawns:Array<TiledObject>;

    public function new()
    {
        var map_data = Luxe.resources.text("assets/tiled/GameplayTesting.tmx").asset.text;
        map = new TiledMap({format: "tmx", asset_path: "assets/tiled", tiled_file_data: map_data});
        map.display({filter: FilterType.nearest});

        spawns = [];

        generate_collision();
        generate_objects();
    }

    function generate_collision()
    {
        var bounds = map.layer("collision").bounds_fitted();
        for( bound in bounds )
        {
            bound.x *= map.tile_width;
            bound.y *= map.tile_height;
            bound.w *= map.tile_width;
            bound.h *= map.tile_height;
            Main.sim.static_colliders.push(Polygon.rectangle(bound.x, bound.y, bound.w, bound.h, false));
        }
    }

    function generate_objects()
    {
        for(group in map.tiledmap_data.object_groups)
        {
            for(object in group.objects)
            {
                switch (object.type)
                {
                    case "spawn":
                        spawns.push(object);
                        Main.player = new Creature("player", "player", object.pos, new PlayerController());

                    default:
                        new Creature(object.type, object.name, object.pos, new DynamicController());
                }
            }
        }
    }
}
