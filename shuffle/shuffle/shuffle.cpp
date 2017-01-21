// shuffle.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

int shuffle()				
{
	int inchar = 0;	
	int firstIndex = 1;
	int secondIndex = 0;
	bool asteriskFound = false;
	inchar = getchar();
	char first[20] = {};
	char second[20] = {};
	first[0] = inchar;

	if (inchar == EOF)
	{
		return 1;
	}

	if (inchar != 10)
	{
		while (inchar != 10)	 //enter = 10
		{
			inchar = getchar();

			if (inchar != 10 && asteriskFound == false)
			{
				if (inchar != 42)		//* = 42
				{
					first[firstIndex] = inchar;
					firstIndex++;
				}
				else
				{
					asteriskFound = true;
				}
			}
			else if(inchar != 10 && asteriskFound == true)
			{
				second[secondIndex] = inchar;
				secondIndex++;
			}

		}

		second[secondIndex] = '*';

		if (asteriskFound == true)
		{
			for (int i = 0; i <= secondIndex; i++)
			{
				std::cout << second[i];
			}
		}

		for (int i = 0; i <= firstIndex; i++)
		{
			std::cout << first[i];
		}
		std::cout << "\n";
	}
	else
	{
		printf("Invalid Input!\n");
		printf("You did not type in anything\n");
	}
	return 0;
}


int main()
{
	std::cout << "Type in CTRL + Z to exit\n";
	int loop = shuffle();
	while (loop != 1)
	{
		loop = shuffle();
	}
	std::cout << "You have terminated the program\n";
	system("PAUSE");
    return 0;
}

