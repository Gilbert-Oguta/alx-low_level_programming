#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int gil;

	gil = *a;
	*a = *b;
	*b = gil;
}
