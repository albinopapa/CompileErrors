#pragma once

#include "Keyboard.h"

class Input
{
public:
	Input();

	void Update( Keyboard &KbdRef );

	bool IsSpacePressed( Keyboard &KbdRef );
public:
	bool is_space_pressed;
};
