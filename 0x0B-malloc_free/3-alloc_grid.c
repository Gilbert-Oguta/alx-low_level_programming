#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer of array
 */
int **alloc_grid(int width, int height)
{
	int **gridin;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridin = malloc(sizeof(int *) * height);

	if (gridin == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gridin[a] = malloc(sizeof(int) * width);

		if (gridin[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridin[a]);

			free(gridin);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)

			gridin[a][b] = 0;
	}
	return (gridin);
}
