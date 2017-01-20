#pragma once

#include "Graphics.h"
#include "Vector.h"

class Entity
{
public:
	Entity();
	~Entity();
	void Update();
	void Draw( Graphics &Gfx, int Square_width, int Square_height);

public:
	Vector position;
	Vector heading;

	int width, height;
};

