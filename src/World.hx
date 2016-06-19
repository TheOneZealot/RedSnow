import luxe.Log.*;
import luxe.Sprite;
import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;
import luxe.collision.shapes.Polygon;
import luxe.importers.tiled.TiledMap;
import luxe.importers.tiled.TiledLayer;
import luxe.tilemaps.Tilemap;
import luxe.importers.tiled.TiledObjectGroup;
import phoenix.Texture;

using StringTools;

class World
{
    public var map:TiledMap;
    public var creatures:Dynamic;
    public var spawns:Array<TiledObject>;
    public var building_layers:Array<TiledLayer>;

    public function new()
    {
        var map_data = Luxe.resources.text("assets/tiled/GameplayTesting.tmx").asset.text;
        map = new TiledMap({format: "tmx", asset_path: "assets/tiled", tiled_file_data: map_data});
        map.display({filter: FilterType.nearest});

        spawns = [];
        building_layers = [];

        generate_collision();
        generate_objects();
        generate_buildings();
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
                    case "Spawn":
                        switch(object.properties.get("Creature"))
                        {
                            case "player":
                                spawns.push(object);
                                Main.player = new Creature("player", "player", object.pos, new PlayerController());
                            default:
                                new Creature(object.properties.get("Creature"), object.name, object.pos, new DynamicController());
                        }
                }
            }
        }
    }

    function generate_buildings()
    {
        for (layer in map.layers)
        {
            if (!StringTools.startsWith(layer.name, "buildings")) continue;

            for (layer in building_layers)
            {
                var tileset:Tileset = map.tilesets.get(layer.properties.get("Tileset"));
                var first_id:Int = tileset.first_id;

                for (z in 0...2)
                {
                    var layer_name = "buildings"+z;

                    map.add_layer({name: layer_name});
                }
            }
        }
    }
}
