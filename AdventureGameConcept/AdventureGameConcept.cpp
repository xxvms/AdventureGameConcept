// AdventureGameConcept.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>


int main()
{
	char dir = 'a';
	int x = 10, y = 10;

	std::cout << "Type Enter to quit" << std::endl;

	while (dir != '\r') // until Enter is not pressed
	{
		std::cout << "Your location is " << x << " , " << y << std::endl;
		std::cout << "Press direction key(n, s, e, w): ";
		
		dir = getche(); // get character
		if (dir == 'n') // go north
			y--;
		else
			if (dir == 's') // go south
				y++;
			else
				if (dir == 'e') // go east
					x++;
				else
					if (dir == 'w') // go west
						x--;
	} // end of while loop

	
    return 0;
}

