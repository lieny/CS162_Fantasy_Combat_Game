/**********************************************************************************
 * Author: Ya Lien
 * Due Date: 7/24/2016
 * Description: Assignment 3 Polymorphism, main.cpp
 * ********************************************************************************/

#include <ctime> //library for time()
#include "champion.hpp"
#include "reptile.hpp"
#include "blueMen.hpp"
#include "harryPotter.hpp"
#include "medusa.hpp"
#include "gollum.hpp"

int main()
{
	srand(time(NULL)); //seed srand
	int i = 0;
	int choice = 0;
	Champion *champ1;
	Champion *champ2;

while(choice != 6)
	{
	cout << "Enter 1 to choose Reptile People " << endl
		<< "Enter 2 to choose BlueMen " << endl
		<< "Enter 3 to choose Harry Potter " << endl
		<< "Enter 4 to choose Medusa " << endl
		<< "Enter 5 to choose Gollum " << endl
		<< "Enter 6 to exit " << endl;
	cout << "Choose your attacker: " << endl;
	for(i = 1 ; i <= 2; i++)
	{
		
		cin >> choice;

		switch(choice)
		{
			case 1:
				if(i == 1)
					champ1 = new Reptile;
				if(i == 2)
					champ2 = new Reptile;
				break;
			case 2:
				if(i == 1)
					champ1 = new BlueMen;
				if(i == 2)
					champ2 = new BlueMen;
				break;
			case 3:
				if(i == 1)
					champ1 = new HarryPotter;
				if(i == 2)
					champ2 = new HarryPotter;
				break;
			case 4:
				if(i == 1)
					champ1 = new Medusa;
				if(i == 2)
					champ2 = new Medusa;
				break;
			case 5:
				if(i == 1)
					champ1 = new Gollum;
				if(i == 2)
					champ2 = new Gollum;
				break;
			case 6:
				cout << "Goodbye " << endl;
				return 0;
		}

		if(i == 1)
			cout << "Choose your defender: " << endl;
	}

	int atk = 0;
	int hit = 0;
	int damage = 0;
	int blood = 1;	//keep track of HP level
	int x = 0;	//which champion to initiate attack

	while(blood > 0)
	{
		if(x == 0)
		{
			atk = champ1->attack();
			hit = champ2->defense(atk);
			damage = champ2->armor(hit);
			blood = champ2->strengthPoints(damage);

			cout << champ1->getType() << " attacks with " << atk << " points." << endl;
			cout << champ2->getType() << "'s HP is now " << blood << endl;
		}

		else
		{
			atk = champ2->attack();
			hit = champ1->defense(atk);
			damage = champ1->armor(hit);
			blood = champ1->strengthPoints(damage);

			cout << champ2->getType() << " attacks with " << atk << " points." << endl;
			cout << champ1->getType() << "'s HP is now " << blood << endl;
		}

		x = 1 - x;
	}

	if(x == 1)
		cout << champ1->getType() << " won!!" << endl << endl;

	if(x == 0)
		cout << champ2->getType() << " won!!" << endl << endl;

	}
/*
	if(blood > 0)
	{
		atk = champ2->attack();
		hit = champ1->defense(atk);
		damage = champ1->armor(hit);
		blood = champ1->strengthPoints(damage);
		
		cout << champ2->getType() << " attacks with " << atk << " points." << endl;
		cout << champ1->getType() << "'s HP is now " << blood << endl;
	}

	

	if(blood <= 0)
		cout << champ2->getType() << " is terminated. " << champ1->getType() << "Won! " << endl;
	
*/


/*
	Champion *champ1;
	champ1 = new Reptile;

	cout << "----------------Reptile---------------" << endl;
	cout << "defense (30 - def) " << champ1->defense(30) << endl;
	cout << "armor (1) " << champ1->armor(8) << endl;
	cout << "strengthPoints (HP 18 - damage 5 = 13) " << champ1->strengthPoints(5) << endl;
	cout << "armor (1) " << champ1->armor(8) << endl;
	cout << "armor (1) " << champ1->armor(8) << endl;
	cout << "attack (random) " << champ1->attack() << endl;


	Champion *champ2;
	champ2 = new BlueMen;
	cout << "---------------BlueMen------------------" << endl;
	cout << "attack (random) " << champ2->attack() << endl;
	cout << "defense (30 - def) " << champ2->defense(30) << endl;
	cout << "armor (hit - offense = 5) " << champ2->armor(8) << endl;
	cout << "strengthPoints (HP - damage = 7) " << champ2->strengthPoints(5) << endl;


	Champion *champ3;
	champ3 = new HarryPotter;
	cout << "---------------HarryPotter------------------" << endl;
	cout << "attack (random) " << champ3->attack() << endl;
	cout << "defense (30 - def) " << champ3->defense(30) << endl;
	cout << "armor (hit - offense = 8) " << champ3->armor(8) << endl;
	cout << "strengthPoints (HP 10 - damage 5 = 5) " << champ3->strengthPoints(5) << endl;

	cout << "strengthPoints reduce to 0: 1st time: (HP 5 - damage 5 = reset 10)" << champ3->strengthPoints(5) << endl;
	cout << "strengthPoints reduce to 0: 2nd time: (HP 10 - damage 12 = -2)" << champ3->strengthPoints(12) << endl;
*/
/*
	Champion *champ4;
	champ4 = new Medusa;
	cout << "---------------Medusa------------------" << endl;
	cout << "attack (random) " << champ4->attack() << endl;
	cout << "defense (30 - def) " << champ4->defense(30) << endl;
	cout << "armor (hit 8 - offense 3 = 5) " << champ4->armor(8) << endl;
	cout << "strengthPoints (HP 8 - damage 5 = 3) " << champ4->strengthPoints(5) << endl;
*/
/*
	Champion *champ5;
	champ5 = new Gollum;
	cout << "---------------Gollum------------------" << endl;
	cout << "attack (random) " << champ5->attack() << endl;
	cout << "defense (30 - def) " << champ5->defense(30) << endl;
	cout << "armor (hit 8 - offense 3 = 5) " << champ5->armor(8) << endl;
	cout << "strengthPoints (HP 8 - damage 5 = 3) " << champ5->strengthPoints(5) << endl;
*/
	return 0;
}
