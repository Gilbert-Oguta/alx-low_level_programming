#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: summed matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, num1 = 0, num2 = 0;
	int *temp = a;

	while (i < size)
	{
		num1 += *temp;
		temp += size + 1;
	}
	temp = a + size - 1;
	i = 0;

	while (i < size)
	{
		num2 += *temp;
		temp += size - 1;
		i++;
	}
	printf("%d, %d\n", num1, num2);
}
