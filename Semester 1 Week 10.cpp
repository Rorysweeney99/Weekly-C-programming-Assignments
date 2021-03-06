// Semester 1 Week 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "string.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers);

int main()
{
	int i;

	srand(time(NULL));

	struct customer customers[10];

	populateCustomers(customers, 10);

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "\tBalance", "\t\tDate of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	if (!(transaction(customers, 10001, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf("account number %d - transaction processed", 10001);
	}
	printf("\n\n");

	if (!(transaction(customers, 33, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf("account number %d  - transaction processed", 33);
	}
	printf("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "\tBalance", "\t\tDate of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	return 0;
}

int getDay(int month)
{
	int day, max = 31;

	if (month == 2) {
		day = rand() % 27 + 1;
	}
	if (month == 9 || month == 4 || month == 6 || month == 11) {
		day = rand() % 30 + 1;
	}
	else {
		day = rand() % 31 + 1;
	}
	return day;
}

int getMonth()
{
	int month;

	month = rand() % 12 + 1;

	return month;
}

int getYear()
{
	int year;

	year = rand() % 2016;

	if (year < 2013) {
		year = rand() % 4 + 2013;
	}

	return year;
}

double getBalance()
{
	double balance = 0;
	int temp;

	temp = rand() % 10000;

	balance = temp - 5000;


	return balance;
}



void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = { "Haiden Soto \t","Oscar Hernandez","Heath Hickman \t","Reagan Mcknight","Noah Bartlett \t","Ross Day \t","Maribel Livingston","Jewel Phillips \t","Blake Gardner \t","Fernanda Ponce \t" };

	for (i = 0; i < 10; i++)
	{
		strcpy_s(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;
		customers[i].balance = getBalance();
		customers[i].lastTrans.year = getYear();
		customers[i].lastTrans.month = getMonth();
		customers[i].lastTrans.day = getDay(getMonth());
	}

	return;

}
void printCustomers(struct customer customers[], int nCustomers)
{
	int i;
	for (i = 0; i < nCustomers; i++) {
		printf("\t\t%s \t %d \t\t %.2lf \t\t %d/%d/%d \n\n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans);
	}


}

int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers)
{
	int i;

	for (i = 0; i < nCustomers; i++) {

		if (customers[i].accountNumber == accountNumber) {

			customers[i].balance += amount;

			return 1;
		}

	}

	return 0;
}