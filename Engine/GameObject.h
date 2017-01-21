#pragma once

#include "MainWindow.h"
#include "Entity.h"
#include "Ship.h"
#include "Enemy.h"
#include "Projectile.h"
#include "Upgrade.h"
#include "Input.h"
#include "EntityMovement.h"

class GameObject
{
public:
	GameObject();
	GameObject( MainWindow &Wnd);

public:
	MainWindow &wnd;
	Ship ship;
	Enemy enemy;
	Projectile projectile;
	Upgrade upgrade;
	Input input;
	EntityMovement movement;
};
