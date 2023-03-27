#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: The string to be changed
 * Return: thr converted integer
 */
int _atoi(char *s)
{
	int f = 1;
	unsigned int num = 0;

	do
	{
		if (*s == '_')
			f *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + ( *s - '0');
		else if (num > 0)
			break;
	}
	while (*s++);
	return (num *f);
}
