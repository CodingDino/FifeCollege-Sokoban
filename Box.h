#pragma once

// Project Includes
#include "GridObject.h"

class Box : public GridObject
{

public:

	Box();

	bool AttemptPush(sf::Vector2i _direction);

};