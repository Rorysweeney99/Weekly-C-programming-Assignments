// Semester 1 Week 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

void
main()
{
	int i = 0;
	char r = 0;

	int array[] =
	{ 65, 116, 32, 50, 48, 32, 68, 101, 103, 114, 101, 101, 115, 44, 32, 84,
		104, 101, 32, 87, 101, 97, 116, 104, 101, 114, 32, 73, 115, 32, 71, 114, 101, 97,
		116, 46 };

	do
	{
		printf("%c", array[i]);
		i++;
	} while (array[i] != 46);
	printf("\n\n");
	i = 0;

	do
	{
		if (array[i] >= 97 && array[i] <= 122)
		{
			r = array[i] - 32;
			printf("%c", r);
		}
		else if (array[i] >= 0 && array[i] <= 64 || array[i] <= 90
			&& array[i] >= 65)
		{
			r = array[i];
			printf("%c", r);
		}
		i++;

	} while (array[i] != 46);
	printf("\n\n");
	i = 0;
	do
	{
		if (array[i] <= 90 && array[i] >= 65)
		{
			r = array[i] + 32;
			printf("%c", r);
		}

		else if (array[i] >= 0 && array[i] <= 64 || array[i] <= 127
			&& array[i] >= 97)
		{
			r = array[i];
			printf("%c", r);
		}
		i++;

	} while (array[i] != 46);
	printf("\n\n");
	i = 0;

}