// Semester 2 Week 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

FILE * fptr;

float readData(char temp[]);

void main() {

	char input[20];

	printf("Enter product Name <or return to quit>: ");
	gets_s(input);

	while (strlen(input) > 1) {
		float Output = readData(input);
		printf("Total Sales for %s = %.2lf \n", input, Output);

		printf("Enter product Name <or return to quit>:");
		gets_s(input);

	}

	if (strlen(input) <= 0) {
		printf("End of Processing");
	}

}
float readData(char temp[])
{
	char Orderdate[20];
	char Region[30];
	char Rep[20];
	char item[40];
	int Nitem = 0;
	double Units = 0;
	double UnitsCost = 0;
	double total = 0;

	fptr = fopen("C:\\Users\\July\\Documents\\SampleData.txt", "r");

	if (fptr == NULL) {
		printf("ERROR, File is empty");
	}
	else {

		while (!feof(fptr))
		{
			fscanf(fptr, "%s\t%s\t%s\t%s\t%d\t%lf\t%lf\n", Orderdate, Region, Rep, item, &Nitem, &Units, &UnitsCost);

			if (strcmp(temp, item) == 0)
			{
				total += UnitsCost;
			}
		}
		fclose(fptr);
	}

	return total;
}