#pragma once

#include "Entity.h"

class Enemy : public Entity
{
public:
	Enemy(){}
	Enemy( Vector Position, int Width, int Height);
	~Enemy();
};