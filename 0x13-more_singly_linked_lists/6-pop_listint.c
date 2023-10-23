#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to the head of a linked list.
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int count = 0;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	count = current->n;
	*head = (*head)->next;
	free(current);

	return (count);
}
