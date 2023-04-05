#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer used
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns square root of a number
 * @n: first integer
 * @b: second integer
 * Return: square root of n
 */
int _sqrt(int n, int b)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((b * b) > n)
	{
		return (-1);
	}
	if (b * b == n)
	{
		return (b);
	}
	return (_sqrt(n, b + 1));
}
