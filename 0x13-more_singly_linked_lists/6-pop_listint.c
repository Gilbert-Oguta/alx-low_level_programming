#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: the head node of the list
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int info;
	listint_t *num;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		num = *head;
		info = num->n;
		*head = (*head)->next;
		free(num);
		return (info);
	}
}
