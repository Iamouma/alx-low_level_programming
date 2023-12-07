#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data.
 * @head: pointer to head of a linked list.
 * Return: sum of all data in linked list.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
