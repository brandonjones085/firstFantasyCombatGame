
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the Game class.
*******************************************************************************/


#ifndef GAME_HPP
#define GAME_HPP

#include "Character.hpp"

class Game 
{
private: 
	Character *attacker; 
	Character *opponent; 
	bool game = true; 
	 
public:
	Game();
	
	void runGame(); 
	void setAttacker(Character*); 
	void setOpponent(Character*); 
	
	~Game();
};


#endif // !

