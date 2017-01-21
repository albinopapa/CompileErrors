#include "GameObject.h"

GameObject::GameObject(){}

GameObject::GameObject( MainWindow &Wnd )
	:
	wnd(Wnd),
	ship(Vector( 400.f, 300.f ), 30, 30),
	enemy(Vector( 20.f, 20.f ), 30, 30),
	projectile(Vector( 0.f, 0.f), 10, 10),
	upgrade( *this ), 
	input( *this ),
	movement( *this )
{}
