
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description: The header file for the blueMen class. 
*******************************************************************************/

#include "Character.hpp"

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP


class blueMen : public Character
{


public:
	blueMen();
	virtual void makeAttack();
	virtual void makeDefense(int);
	virtual int getTotalAttack();
	int specialAbility(); 
	void makeDefenseRoll(); 
	~blueMen();
};


#endif
