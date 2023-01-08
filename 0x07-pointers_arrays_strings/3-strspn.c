/*
 * File: 3-strspn.c
 * Auth: For everyone who is trying to learn sam
 */

#include "main.h"

/**
 * _strspn - Gets the length of prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of value in s which
 *         consist only of value from accept..
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int value = 0;

	int n;

	while (s[i])
	{

		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				break;
			}

			else if (accept[n + 1] == '\0')
				return (value);
		}

		s++;

	}

	return (value);
}
