// Semester 1 Week 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "math.h"

int stringLen(char *str);
int stringToInt(char *str);
char * intToString(int val, char *str);

void main()
{
	int iVal;
	char str[100];
	char string[] = "-12340987";

	iVal = stringToInt(string);

	printf("string: %s in integer form is %d \n\n", string, stringToInt(string));

	iVal = -469033;

	printf("integer: %d in string form is %s \n\n", iVal, intToString(iVal, str));
}

int stringToInt(char *str)
{
	int result = 0;

	int negative = str[0] == '-';
	int i = negative;

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;

	}
	if (negative) {
		result = -result;
	}


	return result;
}

int stringLen(char *str)
{
	int i = 0;

	while (*(str + i) = !'/0')
	{
		i++;
	}

	return i;
}


char * intToString(int val, char * str)
{

	sprintf(str, "%d", val);

	return str;

}