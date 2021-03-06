// Semester 1 Week 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void getName(char emp[]);
int getID(char emp[]);
double getHours(char emp[]);

char firstName[40];
char surname[40];
int ID;
double hours[5];

void main()
{
	char emp1[] = "Smith,Fred,2214,,5,7,8.5,10.0";
	char emp2[] = "Murphy,Sarah,1579,8.5,5,5,8,8";

	getName(emp1);
	getID(emp1);
	getHours(emp1);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

	puts("");

	getName(emp2);
	getID(emp2);
	getHours(emp2);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

}


void getName(char emp[])
{
	int i = 0;
	int pos1 = 0, pos2 = 0;

	while (emp[i] != '\0')
	{
		if (emp[i] == ',')
		{
			if (pos1 == 0)
			{
				pos1 = i;
			}
			else
			{
				pos2 = i;
				break;
			}
		}
		i++;
	}
	strncpy(surname, emp, pos1);
	surname[pos1] = '\0';

	// the students will probably use a while loop here instead, which is fine
	strncpy(firstName, &emp[pos1 + 1], pos2 - pos1 - 1);
	firstName[pos2 - 1] = '\0';
	return;

}

int getID(char emp[])
{
	int i = 0;
	int pos1 = 0, pos2 = 0, pos3 = 0;
	char temp[10];

	while (emp[i] != '\0')
	{
		if (emp[i] == ',')
		{
			if (pos1 == 0)
			{
				pos1 = i;
			}
			else if (pos2 == 0)
			{
				pos2 = i;
			}
			else
			{
				pos3 = i;
				break;
			}
		}
		i++;
	}
	strncpy(temp, &emp[pos2 + 1], pos3 - pos2);
	temp[pos3 - pos2] = '\0';
	ID = atoi(temp);

	return ID;
}

double getHours(char emp[])
{

	int i = 0;
	int numComma = 0;
	int pos1 = 0, pos2 = 0;
	char temp[10];
	int day = 0;
	double totalHours = 0.0;

	while ((emp[i] != '\0') && (numComma < 3))
	{
		if (emp[i] == ',') numComma++;
		i++;
	}

	while ((day < 5) && (emp[i] != '\0'))
	{
		// now i should be start of Mondays hours
		pos1 = i;
		while ((emp[i] != '\0') && (emp[i] != ','))
		{
			i++;
		}
		pos2 = i;

		if ((pos2 - pos1) == 0)
		{
			hours[day] = 0;
		}
		else
		{
			strncpy(temp, &emp[pos1], pos2 - pos1);
			temp[pos2 - pos1] = '\0';
			hours[day] = atof(temp);
			totalHours = totalHours + hours[day];
		}
		day++;
		i++;
	}



	return totalHours;

}
