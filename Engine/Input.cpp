#include "Input.h"

Input::Input()
{}

void Input::Update( MainWindow &Wnd)
{
	is_space_pressed = IsSpacePressed( Wnd );
}

bool Input::IsSpacePressed( MainWindow &Wnd )
{
	if (Wnd.kbd.KeyIsPressed( VK_LEFT ) )
	{
		is_space_pressed = true;
		return true;
	}
	else { return false; }
}
