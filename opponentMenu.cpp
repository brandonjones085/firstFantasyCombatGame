
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The opponentMenu function asks for user input and returns an int. The number returned will indicate the 
** users choice. 
*******************************************************************************/

#include "opponentMenu.hpp"
#include "validateMenu.hpp"
#include <iostream>

int opponentMenu()
{
	int num2; 

	std::cout << "\nSecond choose the second character to fight the attacker" << std::endl;
	std::cout << "Press 1 for Vampire\n";
	std::cout << "Press 2 for Barbarian\n";
	std::cout << "Press 3 for Blue Men\n";
	std::cout << "Press 4 for Medusa\n";
	std::cout << "Press 5 for Harry Potter\n";
	std::cin >> num2;
	validateMenu(num2);

	return num2; 

}
