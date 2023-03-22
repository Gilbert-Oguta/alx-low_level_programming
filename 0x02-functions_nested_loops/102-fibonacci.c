#include <stdio.h>
/**
 * fibonacci -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: nothing
 */
int main(void)
{
	int count;

	unsigned long a = 0, b = 1, c;
	for (count = 0; count < 50; count++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (count == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
