#include "Enemy.h"

Enemy::Enemy(){}

Enemy::Enemy( Vector Position, int Width, int Height)
	:
	Entity( Position, Width, Height )
{
}


Enemy::~Enemy()
{
}
