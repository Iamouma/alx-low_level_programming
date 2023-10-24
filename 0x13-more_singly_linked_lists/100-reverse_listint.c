#include "lists.h"
/**
 * reverse_listint - reverses a listint linked list.
 * @head: double pointer to the head of a linked list.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy = *head;

	if (*head == NULL)
		return (NULL);

	if (copy->next == NULL)
	{
		*head = copy;
		return (*head);
	}
	else if (*head && (*head)->next)
	{
		listint_t *new = *head;
		*head = (*head)->next;
		reverse_listint(head);
		new->next->next = copy;
		new->next = NULL;
	}
	return (*head);
}
