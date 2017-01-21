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
	GameObject( MainWindow &MainWin );
		

public:
	MainWindow &mainwin;
	Ship ship;
	Enemy enemy;
	Projectile projectile;
	Upgrade upgrade;
	Input input;
	EntityMovement movement;
}
