#include "Input.h"

Input::Input( GameObject &Object )
	:
	object( Object )
{}

void Input::Update()
{
	is_space_pressed = object.wnd.kbd.KeyIsPressed( VK_SPACE );
}
