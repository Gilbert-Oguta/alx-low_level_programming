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
	char c[] = "putchar";
	int d;

	for (d = 0; d < 9; d++)
	{
		putchar(c[d]);
	}
	putchar('\n');
	return (0);
}
