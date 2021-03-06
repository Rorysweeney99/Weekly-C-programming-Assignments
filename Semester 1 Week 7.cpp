// Semester 1 Week 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels();

int isVowel(char c);

// generated using http://listofrandomnames.com/

char words[][20] = { "metalepsis","cellulating","caustical","inosculating","lerner","outchide","disproportionate","malang","ammonification","energise" };
int nwords = 10;



void main()
{
	char word[20];
	int i = 0;

	printLongestWord();

	i = findWordWithMostVowels();
	printf("Word with most vowels is: %s \n", words[i]);

	puts("enter word");
	gets_s(word);

	if (findWord(word))
	{
		printf("%s is in our list of words\n", word);
	}
	else
	{
		printf("%s is not in our list of words\n", word);
	}

}

void printLongestWord()
{
	int i, maxi = 0;
	int maxlen = 0;

	for (i = 0; i < nwords; i++)
	{
		if (strlen(words[i]) > maxlen)
		{
			maxlen = strlen(words[i]);
			maxi = i;
		}
	}

	printf("longest word is %s, with %d characters \n", words[maxi], maxlen);


}

int findWord(char word[])
{
	int i;
	int found = 0;

	for (i = 0; i < nwords; i++)
	{
		if (!strcmp(word, words[i]))
		{
			found = 1;
			break;
		}
	}

	return found;
}


int findWordWithMostVowels()
{
	int i, j;
	int maxi = 0, nmax = 0;
	int len;
	int count;

	for (i = 0; i < nwords; i++)
	{
		len = strlen(words[i]);
		count = 0;
		for (j = 0; j < len; j++)
		{
			if (isVowel(words[i][j])) count++;
		}
		if (i == 0)
		{
			nmax = count;
			maxi = 0;
		}
		else
		{
			if (count > nmax)
			{
				nmax = count;
				maxi = i;
			}
		}
	}

	return maxi;
}

int isVowel(char c)
{
	c = toupper(c);
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}