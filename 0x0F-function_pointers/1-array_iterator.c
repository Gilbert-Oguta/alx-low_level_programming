#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @size: size of array
 * @array: integer of array
 * @action: pointer to function
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array && action)
		for (y = 0; y < size; y++)
			action(array[y]);
}
