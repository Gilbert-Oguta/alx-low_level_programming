#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string copied
 * Return: pointer to the duplicated string, NULL if erro
 */
char *_strdup(char *str)
{
	char *strcpy;
	int num, index;

	if (str == NULL)
	{
		return (NULL);
	}

	for (num = 0; str[num]; num++)
	{
		index++;
	}

	strcpy = malloc(sizeof(char) * (index + 1));

	if (strcpy == NULL)
	{
		return (NULL);
	}

	for (num = 0; str[index]; index++)
	{
		strcpy[num] = str[num];
	}

	strcpy[index] = '\0';

	return (strcpy);
}
