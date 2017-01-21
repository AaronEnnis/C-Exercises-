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
	switch (input) 
	{
		case 1:
			printf("January\n");
			break;
		case 2:
			printf("Febuary\n");
			break;
		case 3:
			printf("March\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("May\n");
			break;
		case 6:
			printf("June\n");
			break;
		case 7:
			printf("July\n");
			break;
		case 8:
			printf("Aughest\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("October\n");
			break;
		case 11:
			printf("November\n");
			break;
		case 12:
			printf("December\n");
			break;
		default:
			printf("Invalid input\n");
			break;
	}
}

int main()
{
	printf("Type in the number of a month\n");
	int input = 0;
	int inchar = 0;
	inchar = getchar();
	while (inchar != 10)
	{
		input = input * 10 + (inchar - 48);
		inchar = getchar();
	}
	month(input);
	system("pause");
	return 0;
}

