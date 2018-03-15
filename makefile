#Author: Ya Lien
#Due Date: 7/24/2016
#Description: makefile for Assignment 3

main: champion.cpp champion.hpp reptile.cpp reptile.hpp blueMen.cpp blueMen.hpp harryPotter.cpp harryPotter.cpp medusa.hpp medusa.cpp gollum.hpp gollum.cpp main.cpp
	g++ -o main champion.cpp reptile.cpp blueMen.cpp harryPotter.cpp medusa.cpp gollum.cpp main.cpp

clean:
	rm -f *.o main
