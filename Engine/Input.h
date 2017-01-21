#pragma once

class MainWindow;

class Input
{
public:
	Input( GameObject &Object );

	void Update( MainWindow &Wnd );

public:
	bool is_space_pressed;
	GameObject &object;
};
