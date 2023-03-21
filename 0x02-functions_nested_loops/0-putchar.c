#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int d;

	for (d = 0; d < 9; d++)
	{
		_putchar(c[d]);
	}
	_putchar('\n');
	return (0);
}
