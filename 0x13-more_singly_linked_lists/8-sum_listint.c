#include "lists.h"
#include <stddef.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of listint_t list
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *num = head;

	while (num != NULL)
	{
		sum += num->n;
		num = num->next;
	}
	return (sum);
}
