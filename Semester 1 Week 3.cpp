// Semester 1 Week 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	int Eng = 0;
	int Fre = 0;
	int Mat = 0;
	int Iri = 0;
	int Sci = 0;
	int Max = 0;
	double Avg;
	char fail[50] = "";
	char win[50] = "";
	char max[50] = "";


	printf("Enter English Mark : ");
	scanf("%d", &Eng);
	printf("Enter French Mark : ");
	scanf("%d", &Fre);
	printf("Enter Maths Mark : ");
	scanf("%d", &Mat);
	printf("Enter Irish Mark : ");
	scanf("%d", &Iri);
	printf("Enter Science Mark : ");
	scanf("%d", &Sci);

	Avg = (Eng + Fre + Mat + Iri + Sci) / 5;

	if (Eng < 40) {
		strcat(fail, "English,");
	}
	else {
		strcat(win, "English, ");
	}
	if (Fre < 40) {
		strcat(fail, "French, ");
	}
	else {
		strcat(win, "French, ");
	}
	if (Mat < 40) {
		strcat(fail, "Maths, ");
	}
	else {
		strcat(win, "Maths, ");
	}
	if (Iri < 40) {
		strcat(fail, "Irish, ");
	}
	else {
		strcat(win, "Irish, ");
	}
	if (Sci < 40) {
		strcat(fail, "Science. ");
	}
	else {
		strcat(win, "Science. ");
	}

	if (Eng > Max) {
		Max = Eng;
		strcpy(max, "English");
	}
	if (Iri > Max) {
		Max = Iri;
		strcpy(max, "Irish");
	}
	if (Fre > Max) {
		Max = Fre;
		strcpy(max, "French");
	}
	if (Mat > Max) {
		Max = Mat;
		strcpy(max, "Maths");
	}
	if (Sci > Max) {
		Max = Sci;
		strcpy(max, "Science");
	}

	printf("Average = %.2f \n", Avg);
	printf("Fails : %s \n", fail);
	printf("Passes : %s \n", win);
	printf("Highest Mark : %d in %s", Max, max);

}