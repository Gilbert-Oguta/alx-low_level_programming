#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the head of listint_t list
 * @index: index of node needed
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y;
	listint_t *current, *prev;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	current = *head;
	for (y = 0; y < index - 1 && current != NULL; y++)
	{
		current = current->next;
	}
	if (y != index - 1 || current == NULL || current->next == NULL)
	{
		return (-1);
	}
	prev = current->next;
	current->next = current->next->next;
	free(prev);
	return (1);
}
