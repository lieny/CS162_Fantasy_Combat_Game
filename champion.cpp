/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, champion.cpp
 * ********************************************************************************/

#include "champion.hpp"
//Default constructor
Champion::Champion()
{
	offense = 0;	//armor point
//	HP = 0;		//health point
	numOfDef = 0;	//number of defense dice
	numOfAtk = 0;	//number of attack dice
	type = "champion";
}

//Function to generate a number of defense and subtract from attack number received from the attacker, returns the damage.
int Champion::defense(int atk)
{
	int def = 0;
	int hit = 0;
	for(int i = 0; i < numOfDef; i++)
	{
		def = def + (rand() % 6 + 1); //generate the num of defense
	}

	hit = atk - def;
	
	if(hit <= 0)	//damange should not be negative
		hit = 0;

	return hit; 
	
}

//Function to subtract a damage number resulted from the defense function. returns the damage.
int Champion::armor(int hit)
{
	int damage = 0;
	
	damage = hit - offense;

	if(damage <= 0)		//damage should not be negative
		damage = 0;

	return damage;
}

string Champion::getType()
{
	return type;
}	
