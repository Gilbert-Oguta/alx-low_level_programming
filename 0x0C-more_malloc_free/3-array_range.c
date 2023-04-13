#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *fun;
	int x;

	if (min > max)
	{
		return (NULL);
	}

	fun = malloc(sizeof(*fun) * ((max - min) + 1));

	if (fun == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++, min++)
		fun[x] = min;

	return (fun);
}
