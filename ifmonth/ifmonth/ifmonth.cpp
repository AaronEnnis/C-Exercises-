// ifmonth.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>

void month(int input)
{		
			if (input == 1)
			{
				printf("January\n");
			}
			else if (input == 2)
			{
				printf("Febuary\n");
			}
			else if (input == 3)
			{
				printf("March\n");
			}
			else if (input == 4)
			{
				printf("April\n");
			}
			else if (input == 5)
			{
				printf("May\n");
			}
			else if (input == 6)
			{
				printf("June\n");
			}
			else if (input == 7)
			{
				printf("July\n");
			}
			else if (input == 8)
			{
				printf("Aughest\n");
			}
			else if (input == 9)
			{
				printf("September\n");
			}
			else if (input == 10)
			{
				printf("October\n");
			}
			else if (input == 11)
			{
				printf("November\n");
			}
			else if (input == 12)
			{
				printf("December\n");
			}
			else
			{
				printf("Not a valid input\n");
			}		
}

int main()
{
	printf("Type in the number of a month\n");
	
	int inchar = 0;
	int input = 0;

	inchar = getchar();
	while (inchar != 10)  
	{
		input = input * 10 + (inchar -48); 
		inchar = getchar();
	}
	month(input); 
	system("pause");
    return 0;
}


