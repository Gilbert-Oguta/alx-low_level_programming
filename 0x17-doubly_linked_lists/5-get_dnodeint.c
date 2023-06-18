#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: If the node does not exist - NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	y = 0;

	while (head != NULL)
	{
		if (y == index)
			break;
		head = head->next;
		y++;
	}

	return (head);
}
