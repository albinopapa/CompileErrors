#pragma once

#include "GameObject.h"

class Upgrade
{
public:
	Upgrade();
	Upgrade( GameObject &GameObject );
	
public:
	GameObject &object;
};
