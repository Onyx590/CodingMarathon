#ifndef HP_H
#define HP_H

#include <iostream>
#include "HitpointTypes.h"

class Hp {
public:
	//returns true if set successfully
	bool setMaxHP(hptype newmaxHP) {
		if (newmaxHP < 1)
			return false;
		
		maxHP = newmaxHP;

		if (currentHP > maxHP)
			currentHP = maxHP;

		return true;

	}
	
	hptype getmaxHP()
	{
		return maxHP;
	}

	hptype getcurrentHP()
	{
		return currentHP;
	}

	void takeDamage(hptype damage) {
		if (damage > currentHP)
		{
			currentHP = 0;
			return;
		}
		
		currentHP -= damage;
			
	}

	void heal(hptype amount) {
		if (amount + currentHP > maxHP)
		{
			currentHP = maxHP;
			return;
		}

		currentHP += amount;
	}

	
private:

	hptype currentHP;
	hptype maxHP;
	
};

#endif // !HP_H

