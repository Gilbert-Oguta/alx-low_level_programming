#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *trial = (char *)&trial;

	if (*trial)
		return (1);
	else
		return (0);
}
