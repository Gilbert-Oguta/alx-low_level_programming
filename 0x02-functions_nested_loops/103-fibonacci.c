#include <stdio.h>
/**
 * main -  finds and prints the sum of the even-valued terms
 * Return: return 0
 */
int main(void)
{
	unsigned long j = 0, k = 1, m = 0, sum = 0;

	while (m <= 4000000)
	{
		m = j + k;
		j = k;
		k = m;

		if ((j % 2) == 0)
		sum += j;

	}
	printf("%ld\n", sum);
	return (0);
}
