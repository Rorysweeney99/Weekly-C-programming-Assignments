// Semsester 1 Week 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>


#define tri  1
#define squ  2
#define rec  3
#define par  4
#define tra  5
#define cir  6
#define ell  7
#define sec  8
#define PI 3.14159265359

void main() {

	char again;
	int choice = 1;
	int someint = 0;



	printf("AREA CALCULATOR \n");
	printf("ENTER CHOICE \n");

	printf("1 <triangle>\n");
	printf("2 <Square>\n");
	printf("3 <Rectangle>\n");
	printf("4 <Parallelogram>\n");
	printf("5 <Trapezoid>\n");
	printf("6 <Cirlce>\n");
	printf("7 <Ellipse>\n");
	printf("8 <Sector>\n");

	do {

		printf("Choice : ");
		scanf("%d", &choice);

		float Base;
		float Height;
		float Major;
		float Minor;
		float Radius;
		float Degree;
		float Top;
		float Bottom;


		switch (choice)
		{

		case tri:
			printf("Enter Base Width : \n");
			scanf("%f", &Base);

			printf("Enter Height : \n");
			scanf("%f", &Height);

			float triarea;
			triarea = 0.5*Base*Height;

			printf("Area : %.2f\n", triarea);
			break;

		case squ:
			printf("Enter Base Width : \n");
			scanf("%f", &Base);

			float squarea;
			squarea = Base * Base;

			printf("Area : %.2f\n", squarea);
			break;

		case rec:
			printf("Enter Base Width : \n");
			scanf("%f", &Base);

			printf("Enter Height : \n");
			scanf("%f", &Height);

			float recarea;
			recarea = Base * Height;

			printf("Area : %.2f\n", recarea);
			break;

		case tra:
			printf("Enter Top Width : \n");
			scanf("%f", &Top);

			printf("Enter Bottom Width : \n");
			scanf("%f", &Bottom);

			printf("Enter Height : \n");
			scanf("%f", &Height);

			float traarea;
			traarea = 0.5*(Top + Bottom)*Height;

			printf("Area : %.2f\n", traarea);
			break;

		case ell:
			printf("Enter Major Axis : \n");
			scanf("%f", &Major);

			printf("Enter Minor Axis : \n");
			scanf("%f", &Minor);

			float ellarea;
			ellarea = PI * Major*Minor;

			printf("Area : %.2f\n", ellarea);
			break;

		case par:
			printf("Enter Base Width : \n");
			scanf("%f", &Base);

			printf("Enter Height : \n");
			scanf("%f", &Height);

			float pararea;
			pararea = Base * Height;

			printf("Area : %.2f\n", pararea);
			break;

		case cir:
			printf("Enter Radius : \n");
			scanf("%f", &Radius);


			float cirarea;
			cirarea = PI * Radius*Radius;

			printf("Area : %.2f\n", cirarea);
			break;

		case sec:
			printf("Enter Radius : \n");
			scanf("%f", &Radius);

			printf("Enter Angle : \n");
			scanf("%f", &Degree);

			float secarea;
			secarea = 0.5*Radius*Radius*Degree;

			printf("Area : %.2f\n", secarea);
			break;

		default:
			printf("You Didn't Pick Any of the Options \n");
			printf("Choice : ");
			scanf("%d", &choice);

		}

		printf("Go Again - y; Exit - n: \n");
		scanf(" %c", &again);
	} while (again == 'y');
}