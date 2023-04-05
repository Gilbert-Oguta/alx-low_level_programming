#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to look for
 * Return: boolean
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
	}
/**
 * is_prime - the prime
 * @n: the number to look for
 * @y: beginning of number check
 * Return: return 1 if n is prime or 0 if not
 */
	int is_prime(int n, int y)
	{
	if (y * y > n)
	{
	return (1);
	}
	if (n % y == 0)
	{
	return (0);
	}
	return (is_prime(n, y + 1));
			}
