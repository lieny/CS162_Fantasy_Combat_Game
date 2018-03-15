/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, blueMen.hpp
 * ********************************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "champion.hpp"

class BlueMen: public Champion
{
	public:
		BlueMen();
		virtual int attack();
		virtual int strengthPoints(int);
};

#endif
