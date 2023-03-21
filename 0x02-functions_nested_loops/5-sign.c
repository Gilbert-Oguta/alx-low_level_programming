#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @m: The number to be checked for
 * Returns: 1 and prints + if m is greater than zero
 * 0 and prints 0 if m is zero
 * -1 and prints - if m is less than zero
 */

int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (m == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
