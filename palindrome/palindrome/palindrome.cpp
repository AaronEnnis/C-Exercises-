// palindrome.cpp : Defines the entry point for the console application.
//
/*
Aaron Ennis
c00190504
*/

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>
#include <iostream>

int numDigits(int number)
{
	int digits = 0;
	if (number < 0) digits = 1; 
	{
		while (number) {
			number /= 10;
			digits++;
		}
	}
	return digits;
}

void checkPalindrome(int input)
{
	int digits = numDigits(input);
	int reverse = 0;
	int remainder = 0;
	int tempInput = input;

	if (digits > 1)
	{
		do {
			remainder = input % 10;
			reverse = (reverse * 10) + remainder;
			input = input / 10;
		} while (input != 0);
		if (reverse == tempInput)
		{
			printf("This is a palindrome\n\n");
			printf("Type in some integers\n");
		}
		else {
			printf("This is not a palindrome\n\n");
			printf("Type in some integers\n");
		}
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

int main()
{
	printf("Type in some integers\n");
	printf("Press 0 to exit\n");
	int input = getInput();
	while (input != 0)
	{
		checkPalindrome(input);
		input = getInput();
	}
	system("PAUSE");
    return 0;
}

