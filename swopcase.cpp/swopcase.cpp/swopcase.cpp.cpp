// swopcase.cpp.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>

int checkChar(int userInput)				
{
	if (userInput > 64 && userInput < 91)
	{
		userInput = userInput + 32;
	}
	else if (userInput > 96 && userInput < 123)
	{
		userInput = userInput - 32;
	}
	return (char)userInput;
}


int main()
{
	
	int inchar = 0;
	printf("Enter characters\n");
	printf("CTR + Z to quit out of program\n");
	inchar = getchar();
	int newInChar;
	while (inchar != EOF)			
	{
		newInChar = checkChar(inchar);
		putchar(newInChar);
		inchar = getchar();
	}

	system("pause");
    return 0;
}

