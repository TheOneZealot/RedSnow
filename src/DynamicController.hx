import luxe.Component;
import luxe.Log.*;

class DynamicController extends Component
{
    public var shape(get, null):DynamicShape;

    var _shape:DynamicShape;

    public function new()
    {
        super();

        name = "controller";
    }

    function get_shape() : DynamicShape
    {
        if (_shape == null)
        {
            _shape = cast get("collider");
        }
        return _shape;
    }
}
