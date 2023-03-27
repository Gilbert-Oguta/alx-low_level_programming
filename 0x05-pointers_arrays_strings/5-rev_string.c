#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int x, len;

	charr *begin, *end = s;

	for (x = 0; s[x] != '\0' && s[x + 1] != '\0'; x++)
	{
		end++;
	}
	len = a + 1;
	begin = s;
	for (x = 0; x < len / 2; x++)
	{
		char b;
		b = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
