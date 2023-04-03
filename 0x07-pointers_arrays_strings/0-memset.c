#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointed memory
 * @b: constant byte
 * @n: number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
