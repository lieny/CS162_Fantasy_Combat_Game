/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, reptile.hpp
 * ********************************************************************************/

#ifndef REPTILE_HPP
#define REPTILE_HPP

#include "champion.hpp"

class Reptile:public Champion
{
	public:
		Reptile();
		int attack();
		int strengthPoints(int);

};

#endif
