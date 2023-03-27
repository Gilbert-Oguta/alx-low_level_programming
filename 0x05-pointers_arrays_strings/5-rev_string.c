#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char *x, num;

	x = s;

	while (s[b] != '\0')
	{
		b++;
	}
	for (c = 1; c < b; c++)
	{
		x++;
	}
	for (a = 0; a < (b / 2); a++)
	{
		num = s[a];
		s[a] = *x;
		*x = num;
		x--;
	}
}
