
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the Character class.
*******************************************************************************/


#pragma once
class Character
{

protected: 
	int attack; 
	int defense; 
	int armor; 
	int strengthPoints; 
	int totalAttack; 
	int totalDefense; 
	int damageTotal; 


public:
	Character();
	Character(int, int); 
	int getArmor(); 

	virtual int getDefensePoints(); 
	virtual int getStregthPoints(); 
	virtual void setStregthPoints(int);
	virtual void makeAttack();
	virtual void makeDefense(int); 
	virtual  void setTotalAttack(int); 
	virtual int getTotalAttack(); 
	virtual void setTotalDefense(int); 
	virtual int getTotalDefense(); 
	virtual void setDamageTotal(int);
	virtual int getDamageTotal(); 
	
	

	~Character();
};

