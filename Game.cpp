
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The Game class controls the flow of the whole program.
*******************************************************************************/


#include "Game.hpp"
#include "attackMenu.hpp"
#include "opponentMenu.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "blueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include <iostream>
#include <cstdlib>



Game::Game()
{
}

/*******************************************************************************
** Description:  This controls the whole flow of the game. ]
** It first runs the menus and determes the characters for the attacker and opponents
** Then runs through the attacks and defense and determines if the characters still have positive values. 
** If the strengthPoints drop below 0, the game ends. 
*******************************************************************************/

void Game::runGame()
{
	
	
	int a = attackMenu();

	int o = opponentMenu(); 
	if (a == 1)
	{
		//vampire
		Character *v1 = new Vampire();
		setAttacker(v1); 
	}
	else if (a == 2)
	{
		//barbarian
		Character *b1 = new Barbarian();
		setAttacker(b1);
	}
	else if (a == 3)
	{
		//bluemen
		Character *bl1 = new blueMen(); 
		setAttacker(bl1);

	}
	else if (a == 4)
	{
		//medusa
		Character *m1 = new Medusa(); 
		setAttacker(m1);

	}
	else if (a == 5)
	{
		//harry potter
		Character *h1 = new HarryPotter(); 
		setAttacker(h1); 
	}
	
	if (o == 1)
	{
		//vampire
		Character *v2 = new Vampire();
		setOpponent(v2); 
	}
	else if (o == 2)
	{
		//barbarian
		Character *b2 = new Barbarian();
		setOpponent(b2);
	}
	else if (o == 3)
	{
		//bluemen
		Character *bl2 = new blueMen(); 
		setOpponent(bl2); 
	}
	else if (o == 4)
	{
		//medusa
		Character *m2 = new Medusa(); 
		setOpponent(m2); 
	}
	else if (o == 5)
	{
		//harrypotter
		Character *h2 = new HarryPotter(); 
		setOpponent(h2); 
	}

	//Finds strengthPoints
//	int attackStrength = attacker->getStregthPoints(); 
//	int opponentStrength = opponent->getStregthPoints(); 

	//starts game at round 1
	int round = 1;

	while (game) //game == true
	{
		
		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		std::cout << "-------------------------------------------------------------------" << std::endl;
		std::cout << "\nRound number: " << round << std::endl;

		//Attacker rolls die
		attacker->makeAttack();
; 

		//calculates total
		int aAttack = attacker->getTotalAttack();
//		int oDamage = opponent->getTotalAttack(); 

		//Opponent rolls die
		opponent->makeDefense(aAttack); 

//		int oArmor = opponent->getArmor(); 

		
		//Shows all the totals
		std::cout << "\nAttacker strength " << attacker->getStregthPoints() << std::endl;
		std::cout << "Attacker armor " << attacker->getArmor() << std::endl;
		std::cout << "\nOpponent strength " << opponent->getStregthPoints() << std::endl;
		std::cout << "Opponent armor " << opponent->getArmor() << std::endl;
	

		//stores new strengthPoint value
		int oStrength = opponent->getStregthPoints(); 
		
		//Checks to see if still positive
		if (oStrength < 1)
		{
			delete[] attacker; 
			delete[] opponent; 
			game = false; 
			std::cout << "\nThe opponent lost\n"; 
			std::cout << "\n\nGAME OVER\n\n";
			

		}


		//Starts second stage
		std::cout << "\n\nPlease enter for the opponent to attack now\n" << std::endl; 

		std::cout << "-------------------------------------------------------------------" << std::endl;

		round++;

		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		std::cout << "Round number " << round << std::endl;

		//Opponent rolls die
		opponent->makeAttack();

		

		
		int oAttack = opponent->getTotalAttack(); 

		//Attacker now defends
		attacker->makeDefense(oAttack); 
//		int aDamage = attacker->getTotalAttack();
	
		//Shows new totals
		std::cout << "\nAttacker strength " << attacker->getStregthPoints() << std::endl;
		std::cout << "Attacker armor " << attacker->getArmor() << std::endl;
		std::cout << "\nOpponent strength " << opponent->getStregthPoints() << std::endl;
		std::cout << "Opponent armor " << opponent->getArmor() << std::endl;

		//Stores new value in variable
		int aStrength = attacker->getStregthPoints();

		//Checks to see if still positive
		if (aStrength < 1)
		{
			delete[] attacker; 
			delete[] opponent; 
			game = false;
			std::cout << "\nThe attacker lost\n";
			std::cout << "\n\nGAME OVER\n\n";
			

		}

		std::cout << "\nPress enter for the attacker to attack now\n";
		round++;

	
		 
		
	}


	//Asks user to play again
	char choice = 'y'; 
	std::cout << "\nWould you like to play again y/n "; 
	std::cin >> choice; 
	if (choice == 'y')
	{
		game = true; 
		runGame();
	}
	else
	{
		game = false; 
		std::cout << "\n\nGoodbye\n\n"; 
	}

	delete[] attacker; 
	delete[] opponent; 

}





void Game::setAttacker(Character *a)
{
	attacker = a; 
}


void Game::setOpponent(Character *o)
{
	this->opponent = o; 
}



Game::~Game()
{
}
