#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of a list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
