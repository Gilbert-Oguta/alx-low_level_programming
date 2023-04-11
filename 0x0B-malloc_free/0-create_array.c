#include "main.h"
/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character to be used
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int y;

	if (size == 0)
	{
		return (NULL);
	}
		array = malloc(sizeof(char) * size);

		if (array == NULL)
		{
			return (NULL);
		}

		for (y = 0; y < size; y++)
		{
			array[y] = c;
		}
		return (array);
}
