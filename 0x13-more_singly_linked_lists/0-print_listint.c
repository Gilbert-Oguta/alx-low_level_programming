#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: every list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (num);
}
