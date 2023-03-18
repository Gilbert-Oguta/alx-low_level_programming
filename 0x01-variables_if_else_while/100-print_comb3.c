#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 90; a++)
	{
		for (a = 0; a < 90; a++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
		}
		if (a != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
