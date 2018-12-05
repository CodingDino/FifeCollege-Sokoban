#pragma once

// Project Includes
#include "GridObject.h"

class Player : public GridObject
{

	// Functions

public:

	Player();

	// Overriding Methods
	virtual void Input(sf::Event _gameEvent);
	virtual void Update(sf::Time _frameTime);

private:

	bool AttemptMove(sf::Vector2i _direction);

	// Data

private:

	sf::Vector2i m_pendingMove;

};