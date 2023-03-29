#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int tmp, num;

	for (num = n - 1; num > n / 2; num--)
{
		 tmp = a[n - 1 - num];
		 a[n - 1 - num] = a[num];
		 a[num] = tmp;
}
}
