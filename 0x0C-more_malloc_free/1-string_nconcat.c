#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes of s2 to concatenate to s1
 * Return: pointer to required memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sort;
	unsigned int i, jr1, jr2, jrsort;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (jr1 = 0; s1[jr1] != '\0'; jr1++)
		;

	for (jr2 = 0; s2[jr2] != '\0'; jr2++)
		;

	if (n > jr2)
		n = jr2;

	jrsort = jr1 + n;

	sort = malloc(jrsort + 1);

	if (sort == NULL)
		return (NULL);

	for (i = 0; i < jrsort; i++)
		if (i < jr1)
			sort[i] = s1[i];
		else
			sort[i] = s2[i - jr1];

	sort[i] = '\0';

	return (sort);
}
