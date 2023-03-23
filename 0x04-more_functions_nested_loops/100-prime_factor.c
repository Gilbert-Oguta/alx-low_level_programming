#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a, inc;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a ==0)
		{
			inc = number / a;
		}
	}
	printf("%ld\n", inc);
	return (0);
}
