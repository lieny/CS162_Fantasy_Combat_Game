/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, blueMen.cpp
 * ********************************************************************************/

#include "blueMen.hpp"

//Default constructor
BlueMen::BlueMen()
{
	offense = 3;		//armor point
	HP = 12;		//health point
	numOfDef = 3;		//number of defense dice
	numOfAtk = 2;		//number of attack dice
	type = "Blue Men";
}

//Function to generate attack number
//use rand() to mimic a 10 sided die and loop numOfAtk times (2 for BlueMen), and add up the numbers rolled
int BlueMen::attack()
{
	int atk = 0;
	for(int i = 0; i < numOfAtk; i++)
	{
		atk = atk + (rand() % 10 + 1);
	}

	return atk;
}

//Function to calculate the health point based on the damage received
//from attacker. BlueMen has the Mob ability
int BlueMen::strengthPoints(int dmg)
{
	HP = HP - dmg;

	if(HP == 8 || HP == 4) //*Mob lose 1 die if health level is reduced by 4 points
		numOfDef = numOfDef - 1;

	if(HP <= 0)
		HP = 0;

	return HP;
}

