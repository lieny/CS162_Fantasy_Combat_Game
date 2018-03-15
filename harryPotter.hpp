/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, harryPotter.hpp
 * ********************************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "champion.hpp"

class HarryPotter:public Champion
{
	private:
		bool max;
	public:
		HarryPotter();
		int attack();
		int strengthPoints(int);

};

#endif
