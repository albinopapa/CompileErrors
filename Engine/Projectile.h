#pragma once

#include "Entity.h"
class Projectile : public Entity
{
public:
	Projectile();
	Projectile( Vector Position, int Width, int Height);
	~Projectile();
};

