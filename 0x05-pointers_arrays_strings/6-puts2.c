#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line.
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
