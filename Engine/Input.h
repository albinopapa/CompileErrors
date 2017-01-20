#pragma once

#include "MainWindow.h"

class Input
{
public:
	Input();

	void Update( MainWindow &Wnd );

	bool IsSpacePressed( MainWindow &Wnd );
public:
	bool is_space_pressed;
};
