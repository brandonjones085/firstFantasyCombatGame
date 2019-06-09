
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The main file for the program and where the program is run. 
*******************************************************************************/

#include <iostream>
#include "Game.hpp"

int main()
{
	Game g; 

	std::cout << "\n\nWelcome to the Fantasy Combat Game\n\n"; 

	//Runs the whole game
	g.runGame(); 
}

