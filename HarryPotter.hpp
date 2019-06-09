
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the HarryPotter class. 
*******************************************************************************/

#include "Character.hpp"

class HarryPotter : public Character
{
private: 
	int count = 0; 
public:
	HarryPotter();
	void setCount(int); 
	int returnCount(); 

	virtual void makeAttack();
	virtual void makeDefense(int);
	
	virtual int getTotalAttack();
	
	~HarryPotter();
};

