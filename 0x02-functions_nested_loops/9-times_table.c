#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing
 */
void times_table(void)
{
	int a, b, table;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			table = (a * b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (table >= 10)
			{
				_putchar((table / 10) + '0');
				_putchar((table % 10) + '0');
			}
			else if (table < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((table % 10) + '0');
			}
			else
				_putchar((table % 10) + '0');
		}
		_putchar('\n');
	}
}
