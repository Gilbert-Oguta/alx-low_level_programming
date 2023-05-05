#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: previous number
 * @m: new number
 *
 * Return: number of bits that can be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int twist;
	unsigned int count = 0;

	twist = n ^ m;

	while (twist != 0)
	{
		if (twist & 1)
			count++;
		twist >>= 1;
	}
	return (count);
}
