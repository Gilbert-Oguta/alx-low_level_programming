#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of listint_t list
 * @index: index to the node wanted
 * Return: pointer adress of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y;
	listint_t *add = head;

	for (y = 0; add && y <= index; y++)
	{
		if (y == index)

			return (add);

		add = add->next;
	}
	return (NULL);
}
