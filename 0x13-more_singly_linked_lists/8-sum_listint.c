#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: pointer to the head of a linked list.
 * Return: sum of all integer'n'.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
