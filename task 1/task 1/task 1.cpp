// task 1.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>



int main()
{
	int first = -1;
	int second = 0;
	int numList[20] = { 6,7,5,4,12,8,99,67,89,12,9,3,8,67,8,12,4,9,6,8 };

	std::cout << "Array ofnumbers: ";

	for (int i = 0; i < 20; i++)
	{
		std::cout << numList[i] << " ";
	}

	for (int i = 0 ; i < 20 ; i++)
	{
		if (numList[i] == 12)
		{
			if (first == -1)
			{
				first = i;
				second = i;
			}
			else
			{
				second = i;
			}
		}
	}

	if (first != -1)
	{
		std::cout << "\nFirst instance " << (first + 1);
		std::cout << "\nSecond instance " << (second + 1) << "\n";
	}
	else
	{ 
		std::cout<<"\n"<<first<<"\n";
	}
	system("PAUSE");
    return 0;
}

