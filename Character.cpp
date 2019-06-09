
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The Character class is the base class for all the characters. 
*******************************************************************************/

#include "Character.hpp"


//Constructor
Character::Character()
{
	this->armor = 0; 
	this->strengthPoints = 0; 
	this->attack = 0; 
	this->defense = 0; 
}

Character::Character(int a, int s)
{
	this->armor = a; 
	this->strengthPoints = s; 
}

int Character::getArmor()
{
	return armor; 
}

int Character::getStregthPoints()
{
	return strengthPoints; 
}

void Character::setStregthPoints(int a)
{
	this->strengthPoints = a; 
}

int Character::getDefensePoints()
{
	return defense; 
}


void Character::setTotalAttack(int t)
{
	this->totalAttack = t; 
}

int Character::getTotalDefense()
{
	return totalDefense; 
}

void Character::setTotalDefense(int t)
{
	this->totalDefense = t; 
}

int Character::getTotalAttack()
{
	return totalAttack; 
}

void Character::makeAttack() {  }
void Character::makeDefense(int i) {  }

void Character::setDamageTotal(int) {}
int Character::getDamageTotal() { return damageTotal; }

Character::~Character()
{
}
