// task 3.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>


void printPairs(int product, int arr[], int arrSize)
{
	bool noPairs = true;

	for (int f = 1; f <= arrSize; f++)
	{
		for (int s = 1; s <= arrSize; s++)
		{
			if ((f*s) == product)
			{
				std::cout << f << " * " << s<<"\n";
				noPairs = false;
			}
		}
	}
	if (noPairs == true)
	{
		std::cout << "There are no pairs\n";
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
				printf("Invalid Input!\n");
				value = 0;
				break;
			}
			inchar = getchar();
		}
	}
	else if (inchar == 10)
	{
		printf("Invalid Input!\n\n");
		printf("Type in some integers\n");
		value = 1;
	}
	else
	{
		printf("Invalid Input!\n");
		value = 0;
	}
	return value;
}

int main(void)
{	
	std::cout << "type in 1 or 0 to exit\n";
	std::cout << "Enter an integer\n";
	int product = getInput();
	int arraySize = 0;
	int numbers[100] = {};
	while (product != 0 && product != 1)
	{ 
		if (product != 0 && product != 1)
		{
			std::cout << "Enter an integer <= 100\n";
			arraySize = getInput();
			if (arraySize < 101)
			{
				for (int i = 0; i < arraySize; i++)
				{
					numbers[i] = i + 1;
				}
				printPairs(product, numbers, arraySize);
				std::cout << "Enter an integer\n";
				product = getInput();
			}
			else
			{
				std::cout << "Invalid input\n";
			}
		}
	}
	system("PAUSE");
	return 0;
}

