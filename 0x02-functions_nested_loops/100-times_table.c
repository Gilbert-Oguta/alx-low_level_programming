#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0.
 */
void print_times_table(int n)
{
	int a, b, table;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				table = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (table < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((table % 10) + '0');
				}
				else if (table >= 10 && table < 100)
				{
					_putchar(' ');
					_putchar((table / 10) + '0');
					_putchar((table % 10) + '0');
				}
				else if (table >= 100 && b != 0)
				{
					_putchar((table / 100) + '0');
					_putchar((table / 10) % 10 + '0');
					_putchar((table % 10) + '0');
				}
				else
					_putchar((table % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
