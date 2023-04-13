#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the previosly allocated memory
 * @old_size: size of space for ptr in memory
 * @new_size: size of new memory to be allocated
 * Return: pointer to the address of new memory for ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
