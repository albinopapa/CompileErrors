#pragma once

class GameObject;

class Input
{
public:
	Input( GameObject &Object );

	void Update();

public:
	bool is_space_pressed;
	GameObject &object;
};
