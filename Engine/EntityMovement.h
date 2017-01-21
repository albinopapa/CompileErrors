#pragma once

#include "Input.h"
#include "Projectile.h"
#include "Ship.h"
#include "Enemy.h"

class EntityMovement
{
public:
	EntityMovement( GameObject &Object );
	void MoveProjectile();
	void MoveShip();
	void MoveEnemy();

public:
	GameObject &object;
}
