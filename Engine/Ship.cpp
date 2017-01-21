#include "Ship.h"

Ship::Ship(){}

Ship::Ship( Vector Position, int Width, int Height )
	:
	Entity( Position, Width, Height )
{
}


Ship::~Ship()
{
}
