import luxe.Component;
import luxe.Vector;
import luxe.collision.Collision;
import luxe.collision.data.ShapeCollision;
import luxe.collision.shapes.Shape;

class DynamicShape extends Component
{
    public var shape:Shape;
    public var velocity:Vector;
    public var dampening:Float;
    public var acceleration:Float;
    public var max_speed:Float;

    public function new(_shape:Shape)
    {
        super();

        name = "collider";
        shape = _shape;
        velocity = new Vector();
        dampening = 0.72;
        acceleration = 4096;
        max_speed = 64;
    }

    override public function onadded()
    {
    }

    override public function entity_pos_change(_pos:Vector)
    {
        shape.position.copy_from(pos);
    }
}
