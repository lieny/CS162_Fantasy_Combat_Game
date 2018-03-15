/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, champion.hpp
 * ********************************************************************************/

#ifndef CHAMPION_HPP
#define CHAMPION_HPP

#include <iostream>
#include <stdlib.h> //library for rand()
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Champion
{
	protected:
		int offense;	//armor point
		int HP;		//health point
		int numOfDef;	//number of defense dice
		int numOfAtk;	//number of attack dice
		string type; //champion type
		
	public:
		Champion();	
		virtual int strengthPoints(int) = 0; //pure virtual function
		virtual int attack() = 0; //a pure virtual function
		int defense(int); 
		int armor(int);
		string getType();
};

#endif
