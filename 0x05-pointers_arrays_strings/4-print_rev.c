#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int leng = 0, index = 0;
	leng = _strlen(s);

	for (index = leng - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
