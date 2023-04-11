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
		return (NULL);

	num = 0;
	while (str[num] != '\0')
		num++;

	strcpy = malloc(sizeof(char) * (num + 1));

	if (strcpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		strcpy[index] = str[index];

	return (strcpy);
}
