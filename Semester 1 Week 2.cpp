// Semester 1 Week 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "stdio.h"

void main()
{
	int hours = 0;
	float rate = 12.5;
	float pay = 0.0;
	float overtime = 25;

	printf("Enter hours worked: ");
	scanf_s("%d", &hours);
	pay = hours * rate;

	if (hours <= 40)
	{
		pay = hours * rate;
	}

	else

	{
		pay = 40 * rate + (hours - 40)*overtime;
	}


	printf("Your worked %d hours, and earned %.2f \n", hours, pay);
}