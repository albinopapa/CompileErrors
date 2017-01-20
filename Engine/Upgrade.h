#pragma once

#include "Ship.h"

class Upgrade
{
public:
	Upgrade( Ship &ShipRef );
	~Upgrade();
	
public:
	Ship &ship;
};

