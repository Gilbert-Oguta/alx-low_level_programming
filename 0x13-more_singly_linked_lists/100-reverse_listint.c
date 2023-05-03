#include "lists.h"
#include <stddef.h>
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the head of listint_t list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;

	while (current_node != NULL)
	{
		next = current_node->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = next;
	}
	*head = previous_node;
	return (*head);
}
