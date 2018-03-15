/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, medusa.cpp
 * ********************************************************************************/

#include "medusa.hpp"

//Default constructor
Medusa::Medusa()
{
	offense = 3;		//armor point
	HP = 8;			//health point 
	numOfDef = 1;		//number of defense dice
	numOfAtk = 2;		//number of attack dice *Glare
	type = "Medusa";
}

//Function to generate attack number
//use rand() to mimic a 6 sided die and loop numOfAtk times (2 for Medusa), 
//and add up the numbers rolled. Medusa has the Glare ability
int Medusa::attack()
{
	int atk = 0;
	for(int i = 0; i < numOfAtk; i++)
	{
		atk = atk + (rand() % 6 + 1);
	}
	if(atk == 12) //if Medusa rolls a 12, Medusa wins
	{
		atk = 1000;
	}

	return atk;
}

//Function to calculate the health point based on the damage received
//from attacker. 
int Medusa::strengthPoints(int dmg)
{
	HP = HP - dmg;
	
	if(HP <= 0)
		HP = 0;	
	return HP;
}

