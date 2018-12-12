// Project Includes
#include "Box.h"
#include "Framework/AssetManager.h"

Box::Box()
	: GridObject()
{
	m_sprite.setTexture(AssetManager::GetTexture("graphics/box.png"));
	m_blocksMovement = true;
}