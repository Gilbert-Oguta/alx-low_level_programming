#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *num_node;

	while (*head != NULL)
	{
		num_node = (*head)->next;
		*head = num_node;
		free(*head);
	}
}
