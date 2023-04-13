#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amount of memeory to be allocated
 * Return: pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *oguta;

	oguta = malloc(b);
	if (oguta == NULL)
	{
		exit(98);
	}
	return (oguta);
}
