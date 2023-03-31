#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int rev, x;

	for (x = n - 1; x > n / 2; x--)
	{
		rev = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = rev;
	}
}
