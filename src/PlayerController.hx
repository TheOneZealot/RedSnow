import luxe.Component;
import luxe.Vector;
import luxe.Input;

class PlayerController extends DynamicController
{
    public function new()
    {
        super();
    }

    override function update(dt:Float)
    {
        if(Luxe.input.inputdown("up"))
        {
            shape.velocity.y -= shape.acceleration * dt;
        }
        if(Luxe.input.inputdown("left"))
        {
            shape.velocity.x -= shape.acceleration * dt;
        }
        if(Luxe.input.inputdown("down"))
        {
            shape.velocity.y += shape.acceleration * dt;
        }
        if(Luxe.input.inputdown("right"))
        {
            shape.velocity.x += shape.acceleration * dt;
        }
    }
}
