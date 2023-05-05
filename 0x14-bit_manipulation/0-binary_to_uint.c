#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int y = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[y] != '\0')
	{
		if (b[y] == '0' || b[y] == '1')
		{
			res = res * 2 + (b[y] - '0');
			y++;
		}
		else
		{
			return (0);
		}
	}
	return (res);
}
