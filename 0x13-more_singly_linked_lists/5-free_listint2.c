#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the head of a linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
