#include <stdio.h>
/**
 * fibonacci -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: nothing
 */
int main(void)
{
	unsigned long count, a, b, c;

	a = 0;
	b = 1;
	for (count = 0; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (count = "49")
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
