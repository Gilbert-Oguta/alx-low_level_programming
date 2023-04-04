#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: summed matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, num1 = 0, num2 = 0;

	while (i < size)
	{
		num1 = num1 + *(a + i * size + i);
		num2 = num2 + *(a + i * size + size - i - 1);

		i++;
	}
	printf("%i, %i\n", num1, num2);
}
