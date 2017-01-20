#include "Entity.h"

Entity::Entity( Vector Position, int Width, int Height)
	:
	position( Position ),
	width( Width ),
	height( Height )
{}

Entity::~Entity()
{}

void Entity::Update()
{}

void Entity::Draw(Graphics & Gfx, int Square_width, int Square_height )
{
	for (int r = 0; r < Square_width; ++r)
	{
		for (int c = 0; c < Square_height; ++c)
		{
			Gfx.PutPixel(position.x + r, position.y + c, Colors::Gray);
		}
	}
}
