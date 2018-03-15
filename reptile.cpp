/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, reptile.cpp
 * ********************************************************************************/

#include "reptile.hpp"

//Default constructor
Reptile::Reptile()
{
	offense = 7;		//armor point
	HP = 18;		//health point
	numOfDef = 1;		//number of defense dice
	numOfAtk = 3;		//number of attack dice
	type = "Reptile People";
}

//Function to calculate the health point based on the damage received
//from attacker
int Reptile::strengthPoints(int dmg)
{
	HP = HP - dmg;

	if(HP <= 0)
		HP = 0;
	return HP;
}

//Function to generate attack number
//use rand() to mimic a 6 sided die and loop numOfAtk times (1 for Reptile), and add up the numbers rolled
int Reptile::attack()
{
	int atk = 0;
	
	for(int i = 0; i < numOfAtk; i++)
	{
		atk = atk + (rand() % 6 + 1);
	}

	return atk;
}


