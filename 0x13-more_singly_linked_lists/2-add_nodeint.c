#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the head of a linked list.
 * @n: integer value to add to the list.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
