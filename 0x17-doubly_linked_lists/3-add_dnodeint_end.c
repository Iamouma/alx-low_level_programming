#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of dlinked list.
 * @head: double pointer to first node in list.
 * @n: node to be added.
 * Return: NULL if fails, new address if success.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *i = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (i->next)
		{
			i = i->next;
		}
		i->next = new;
		new->prev = i;
	}
	return (new);
}
