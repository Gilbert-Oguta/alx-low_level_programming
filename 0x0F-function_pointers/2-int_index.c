#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer.
 * @size: number of elements
 * @array: input integer
 * @cmp: pointer to function
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (y < size)
			{
				if (cmp(array[y]))
					return (y);

				y++;
			}
		}
	}
	return (-1);
}
