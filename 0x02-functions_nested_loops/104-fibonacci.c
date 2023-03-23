#include <stdio.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int zim;
	unsigned long a1 = 0, a2 = 1, a3;
	unsigned long a1_q1, a1_q2, a2_q1, a2_q2;
	unsigned long q1, q2;

	for (zim = 0; zim < 92; zim++)
	{
		a3 = a1 + a2;
		printf("%lu, ", a3);
		a1 = a2;
		a2 = a3;
	}
	a1_q1 = a1 / 10000000000;
	a2_q1 = a2 / 10000000000;
	a1_q2 = a1 % 10000000000;
	a2_q2 = a2 % 10000000000;
	for (zim = 93; zim < 99; zim++)
	{
		q1 = a1_q1 + a2_q1;
		q2 = a1_q2 + a2_q2;
		if ((a1_q2 + a2_q2) > 9999999999)
		{
			q1 += 1;
			q2 %= 10000000000;
		}
		printf("%lu%lu", q1, q2);
		if (zim != 98)
		printf(", ");

		a1_q1 = a2_q1;
		a1_q2 = a2_q2;
		a2_q1 = q1;
		a2_q2 = q2;
	}
	printf("\n");
	return (0);
}
