// task 4.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c0019054
*/

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

int numberOfWords()
{
	int wordCount = 0;
	int inchar = 0;
	bool letter = false;
	bool error = false;
	inchar = getchar();
	if (inchar == EOF)
	{
		return 1000;
	}
	if ((inchar > 64 && inchar < 91) || (inchar > 96 && inchar < 123) || inchar == 32) //only allows letters from A-Z, a-z and a space 
	{
		while (inchar != 10)	 //enter = 10
		{
			while (inchar != 32 && inchar != 10)		//space = 32
			{
				letter = true;
				if ((inchar >= 0 && inchar < 65) || (inchar > 90 && inchar < 97) || (inchar > 122 && inchar <= 127)) //checks everything that isn't a letter
				{
					error = true;
					letter = false;
					break;
				}
				inchar = getchar();
			}
			if (inchar == 10 && letter == true)
			{
				error = false;
			}

			if (letter == true && error == false)
			{
				wordCount++;
				letter = false;
				error = false;
				
				if (inchar == 10)
				{
					break;
				}
			}
			inchar = getchar();
		}
	}
	else if (inchar == 10)
	{
		printf("Invalid Input!\n");
		printf("You did not type in any words\n");
	}

	return wordCount;
}

int main()
{
	std::cout << "Type in CTRL + Z to exit\n";
	std::cout << "Type in some words\n";
	int words = numberOfWords();
	while (words != 1000)
	{
		std::cout << "There was: " << words << " words input\n";
		words = numberOfWords();
	}
	std::cout << "You have terminated the program\n";
	system("PAUSE");
    return 0;
}

