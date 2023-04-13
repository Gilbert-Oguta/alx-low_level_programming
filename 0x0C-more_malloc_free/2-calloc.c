#include "main.h"
#include <stdlib>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: allocated size of the memory block
 * Return: pointer to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *man;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	man = malloc(nmemb * size);
	if (man != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			man[a] = 0;
		return (man);
	}
	else
		return (NULL);
}
