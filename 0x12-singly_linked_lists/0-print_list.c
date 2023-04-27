#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t
 *
 * Return: number of nodes available
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		num++;
	}

	return (num);
}
