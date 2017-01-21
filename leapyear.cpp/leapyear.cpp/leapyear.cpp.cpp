// leapyear.cpp.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>
#include <iostream>

void isLeapYear(int input)
{
	if (input >= 0)
	{
		if ((input % 100) == 0)
		{
			if ((input % 400) == 0)
			{
				std::cout << "This is a leap year. \n";
				std::cout << "\nEnter integers\n";
			}
			else
			{
				std::cout << "This is not a leap year. \n";
				std::cout << "\nEnter integers\n";
			}
		}

		else if ((input % 4) == 0)
		{
			std::cout << "This is a leap year. \n";
			std::cout << "\nEnter integers\n";
		}

		else
		{
			std::cout << "This is not a leap year. \n";
			std::cout << "\nEnter integers\n";
		}
	}
	else {
		std::cout << "\nEnter integers\n";
	}
}

int getInput()
{
	int value = 0;
	int inchar = 0;
	inchar = getchar();
	if (inchar > 47 && inchar < 58)
	{
		while (inchar != 10)
		{
			value = value * 10 + (inchar - 48);			
			if (inchar > 57 || inchar < 48)
			{
				std::cout << "\nInvalid input\n";
				value = 0;
				break;
			}
			inchar = getchar();
		}
	}
	else if (inchar == 10)
	{
		std::cout << "\nInvalid input\n";
		value = -1;
	}
	else {
		std::cout << "\nInvalid input\n";
		value = 0;
	}
	return value;
}


int main()
{
	std::cout << "Enter integers\n";
	std::cout << "Type in 0 the exit\n";
	int input = getInput();
	while (input != 0)
	{
		isLeapYear(input);
		input = getInput();
	}
	std::cout << "\nYou have terminated the program \n \n";
	system("PAUSE");
	return 0;
}

