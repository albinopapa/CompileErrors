#include "Input.h"

Input::Input()
{}

void Input::Update( Keyboard &KbdRef )
{
	is_space_pressed = IsSpacePressed( KbdRef );
}

bool Input::IsSpacePressed( Keyboard &KbdRef )
{
	if (KbdRef.KeyIsPressed( VK_LEFT )
	{
		is_space_pressed = true;
		return true;
	}
	else { return false; }
}
