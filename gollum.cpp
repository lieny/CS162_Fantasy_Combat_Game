/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, gollum.cpp
 * ********************************************************************************/

#include "gollum.hpp"

//Default constructor
Gollum::Gollum()
{
	offense = 3;		//armor point
	HP = 8;			//health point 
	numOfDef = 1;		//number of defense dice
	numOfAtk = 1;		//number of attack dice *Ring
	type = "Gollum";
}

//Function to generate attack number
//use rand() to mimic a 6 sided die and loop numOfAtk times (1 for Gollum), 
//and add up the numbers rolled. Gollum has the ring ability
int Gollum::attack()
{
	int i = 0; //loop counter
	int atk = 0;
	int chance = 0;
	chance = rand() % 20 + 1;	
	if(chance == 1) //determine the 5% chance

	{
		for(i = 0; i < 3; i++)	//make an attack with 3d6
		{
			atk = atk + (rand() % 6 + 1);
		}
	}
	
	else
	{
		for(i = 0; i < numOfAtk; i++)
		{
			atk = atk + (rand() % 6 + 1);
		}
	}
	
	return atk;
}

//Function to calculate the health point based on the damage received
//from attacker. 
int Gollum::strengthPoints(int dmg)
{
	HP = HP - dmg;
	
	if(HP <=0)
		HP = 0;
	
	return HP;
}

