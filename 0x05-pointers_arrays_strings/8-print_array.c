#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
