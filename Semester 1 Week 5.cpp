// Semester 1 Week 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "stdio.h"


void main()
{
	printf("Program to calculate the average, min and max of up to 10 floating poin numbers \n");
	printf("Enter up to 10 numbers <enter 0 when you're ready to stop> \n");
	printf("____________________________________________________________ \n");

	double SUM = 0;
	double AVG = 0;
	double MAX = 0;
	double MIN = 0;
	double NUM;

	for (int i = 0; i < 10; i++)
	{
		printf(" \n Enter Number %d# :", i + 1);
		scanf("%lf", &NUM);

		if (i < 1)
		{
			MIN = NUM;
			MAX = NUM;
			if (NUM == 0)
			{
				printf("COMPUTER SAYS NO TO YOUR 0 \n");
				break;
			}
		}
		if (NUM < MIN && NUM != 0)
		{
			MIN = NUM;
		}
		if (NUM > MAX)
		{
			MAX = NUM;
		}
		SUM = SUM + NUM;

		if (NUM == 0)
		{
			AVG = (SUM / i);
			printf("The Average is %.2lf \n", AVG);
			printf("The Min is %.2lf \n", MIN);
			printf("The Max is %.2lf \n", MAX);
			break;
		}
		if (i == 9)
		{
			AVG = (SUM / i);
			printf("The Average is %.2lf \n", AVG);
			printf("The Min is %.2lf \n", MIN);
			printf("The Max is %.2lf \n", MAX);
		}
	}
}