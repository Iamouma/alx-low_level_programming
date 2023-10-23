#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to head of a linked list.
 * @n: integer value to add to the list.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
