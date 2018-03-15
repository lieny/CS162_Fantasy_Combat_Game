/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, gollum.hpp
 * ********************************************************************************/

#ifndef GOLLUM_HPP
#define GOLLUM_HPP

#include "champion.hpp"

class Gollum:public Champion
{
	public:
		Gollum();
		int attack();
		int strengthPoints(int);
};

#endif
