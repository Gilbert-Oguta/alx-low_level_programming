#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: pointer to the head of listint_t list
 * @idx: index of node needed
 * @n: content of the next new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new_node, *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (y = 0; y < idx - 1 && temp != NULL; y++)
	{
		temp = temp->next;
	}
	if (y != idx - 1 || temp == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
