#pragma once
#include "GameObject.h"


class Input
{
public:
	Input();
	Input( GameObject &Object );

	void Update();

public:
	bool is_space_pressed;
	GameObject &object;
};
