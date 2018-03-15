/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, medusa.hpp
 * ********************************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "champion.hpp"

class Medusa:public Champion
{
	public:
		Medusa();
		int attack();
		int strengthPoints(int);

};

	
#endif
