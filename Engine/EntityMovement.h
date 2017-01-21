#pragma once

#include "GameObject.h"

class EntityMovement
{
public:
	EntityMovement();
	EntityMovement( GameObject &Object );
	void MoveProjectile();
	void MoveShip();
	void MoveEnemy();

	void Update();
public:
	GameObject &object;
};
