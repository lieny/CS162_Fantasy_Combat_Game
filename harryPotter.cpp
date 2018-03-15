/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, harryPotter.cpp
 * ********************************************************************************/

#include "harryPotter.hpp"

HarryPotter::HarryPotter()
{
	offense = 0;		//armor point
	HP = 10;		//health point *Hogwarts
	numOfDef = 2;		//number of defense dice
	numOfAtk = 2;		//number of attack dice
	max = false;		//check if he maxed out 20 HP
	type = "Harry Potter";
}

//Function to generate attack number
//use rand() to mimic a 6 sided die and loop numOfAtk times (2 for HarryPotter), and add up the numbers rolled
int HarryPotter::attack()
{
	int atk = 0;
	for(int i = 0; i < numOfAtk; i++)
	{
		atk = atk + (rand() % 6 + 1);
	}

	return atk;
}

//Function to calculate the health point based on the damage received
//from attacker. HarryPotter has the Hogwarts ability
int HarryPotter::strengthPoints(int dmg)
{
	HP = HP - dmg;
	
	//*Hogwarts ability
	if(HP <= 0 && max == false) //if Harry has not max out 20 HP
	{
		HP = 10; //reset life
		max = true;

	}

	if(HP <= 0)
		HP = 0;
	//else he is dead
	
	return HP;
}

