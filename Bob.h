#pragma once
#include "PlayebleCharacter.h"

class Bob : public PlayableCharacter
{
public:
	// Create a constructor specific to Bob
	Bob();

	// The overridden input handler for Bob
	bool virtual handleInput();
};