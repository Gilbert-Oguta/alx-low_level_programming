#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
	int a, b = 0;

	for (a = 0; a < 1024; a++)

	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
