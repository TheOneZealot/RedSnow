import luxe.Log.*;
import luxe.GameConfig;
import luxe.Input;
import luxe.Vector;
import luxe.Color;
import luxe.Parcel;
import luxe.ParcelProgress;
import phoenix.Texture;
import phoenix.Batcher;

class Main extends luxe.Game
{
    public static var sim:Simulation;
    public static var world:World;
    public static var player:Creature;

    var loaded:Bool = false;

    override function config(config:GameConfig)
    {
        config.window.title = 'Red Snow';
        config.window.width = 960;
        config.window.height = 640;
        config.window.fullscreen = false;

        return config;
    }

    override function ready()
    {
        var parcel = new Parcel({
            texts: [{id: "assets/tiled/GameplayTesting.tmx"}],
            jsons: [
                {id: "assets/entities/Creatures.json"},
                {id: "assets/animations/Entity_Enemy.json"},
                {id: "assets/animations/Entity_Player.json"}
            ],
            textures: [
                {id: "assets/textures/Tileset_Editor.png"},
                {id: "assets/textures/Tileset_Snow.png"},
                {id: "assets/textures/Entity_Player.png"},
                {id: "assets/textures/Entity_Enemy.png"}
            ]
        });

        new ParcelProgress({
            parcel: parcel,
            background: new Color(1, 1, 1, 0.85),
            oncomplete: onassetsloaded
        });

        parcel.load();
    }

    override function onkeyup(e:KeyEvent)
    {
        if(e.keycode == Key.escape)
		{
            Luxe.shutdown();
        }
    }

    override function update(dt:Float)
    {
        if (!loaded) return;

        Luxe.camera.center.copy_from(player.pos);
    }

    function onassetsloaded(_)
    {
        loaded = true;

        sim = Luxe.physics.add_engine(Simulation);
        sim.draw = true;

        Creature.load_creature_types();

        world = new World();

        Luxe.camera.scale.addScalar(-0.5);

        Luxe.input.bind_key("up", Key.key_w);
        Luxe.input.bind_key("left", Key.key_a);
        Luxe.input.bind_key("down", Key.key_s);
        Luxe.input.bind_key("right", Key.key_d);
    }
}
