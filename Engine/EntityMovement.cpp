#include "EntityMovement.h"

EntityMovement::EntityMovement(){}

EntityMovement::EntityMovement( GameObject &Object )
	:
	object( Object )
{}

void EntityMovement::Update()
{
	void MoveProjectile();
	void MoveShip();
	void MoveEnemy();
	void MoveAll();
}

void EntityMovement::MoveProjectile()
{
	if( object.input.is_space_pressed )
	{
	}

}

void EntityMovement::MoveShip()
{

}

void EntityMovement::MoveEnemy()
{}
