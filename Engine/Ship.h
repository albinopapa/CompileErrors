#pragma once

#include "Entity.h"
#include "Vector.h"
#include "Graphics.h"

class Ship : public Entity
{
public:
	Ship();
	Ship( Vector Position, int Width, int Height);
	~Ship();
};

