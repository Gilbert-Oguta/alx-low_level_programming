#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase from a-z
 * Return: Nothing
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);

	_putchar('\n');
}
