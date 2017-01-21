#include "Projectile.h"

Projectile::Projectile(){}

Projectile::Projectile( Vector Position, int Width, int Height )
	:
	Entity( Position, Width, Height )
{
}


Projectile::~Projectile()
{
}
