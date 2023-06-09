#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
