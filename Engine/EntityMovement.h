#pragma once

class GameObject;

class EntityMovement
{
public:
	EntityMovement( GameObject &Object );
	void MoveProjectile();
	void MoveShip();
	void MoveEnemy();

	void Update();
public:
	GameObject &object;
};
