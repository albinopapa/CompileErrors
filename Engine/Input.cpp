#include "Input.h"

Input::Input( GameObject &GameObject )
	object( GameObject )
{}

void Input::Update()
{
	is_space_pressed = object.wnd.kbd.KeyIsPressed( VK_SPACE );
}
