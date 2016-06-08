import luxe.Color;
import luxe.Vector;
import luxe.utils.Maths;
import luxe.collision.Collision;
import luxe.collision.shapes.Shape;
import luxe.collision.shapes.Polygon;
import phoenix.Batcher;

class Simulation extends luxe.Physics.PhysicsEngine
{
    public var debug_batcher:Batcher;

    public var dynamic_colliders:Array<DynamicShape>;
    public var static_colliders:Array<Shape>;

    var dynamic_color:Color;
    var static_color:Color;

    public function new()
    {
        super();

        debug_batcher = new Batcher(Luxe.renderer, "debug_batcher");
        debug_batcher.layer = 2;
        Luxe.renderer.add_batch(debug_batcher);

        dynamic_colliders = [];
        static_colliders = [];

        dynamic_color = new Color(1, 1, 1);
        static_color = new Color(1, 0, 0);
    }

    override public function update()
    {
        for( shape in dynamic_colliders )
        {
            shape.velocity.x *= shape.dampening;
            shape.velocity.y *= shape.dampening;

            shape.velocity.x = Maths.clamp(shape.velocity.x, -shape.max_speed, shape.max_speed);
            shape.velocity.y = Maths.clamp(shape.velocity.y, -shape.max_speed, shape.max_speed);

            shape.pos.x += shape.velocity.x * Luxe.physics.step_delta;
            shape.pos.y += shape.velocity.y * Luxe.physics.step_delta;

            var collisions = Collision.shapeWithShapes(shape.shape, static_colliders);
            for( collision in collisions )
            {
                shape.pos.x += collision.separation.x;
                shape.pos.y += collision.separation.y;

                if( collision.unitVector.x != 0 )
                {
                    shape.velocity.x = 0;
                }
                if( collision.unitVector.y != 0 )
                {
                    shape.velocity.y = 0;
                }
            }
            for(other_shape in dynamic_colliders)
            {
                if (shape == other_shape) continue;
                var collision = Collision.shapeWithShape(shape.shape, other_shape.shape);

                if (collision == null) continue;

                shape.pos.x += collision.separation.x;
                shape.pos.y += collision.separation.y;

                if( collision.unitVector.x != 0 )
                {
                    shape.velocity.x = 0;
                }
                if( collision.unitVector.y != 0 )
                {
                    shape.velocity.y = 0;
                }

                shape.entity.events.fire("oncollision", {data: collision, other: other_shape});
            }
        }
    }

    override public function render()
    {
        if (!draw) return;

        for( shape in static_colliders )
        {
            draw_polygon(cast shape, static_color);
        }
        for( shape in dynamic_colliders )
        {
            draw_polygon(cast shape.shape, dynamic_color, shape.pos == null ? shape.shape.position : shape.pos);
        }
    }

    function draw_polygon(poly:Polygon, col:Color, pos:Vector = null)
    {
        var geo = Luxe.draw.poly({
            points: poly.vertices,
            color: col,
            solid: false,
            close: true,
            immediate: true,
            batcher: debug_batcher
        });
        geo.transform.pos.copy_from(if (pos == null) poly.position else pos);
    }
}
