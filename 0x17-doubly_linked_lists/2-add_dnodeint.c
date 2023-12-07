#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of a dlinked list.
 * @head: double pointer to the first element in list.
 * @n: new item in the list.
 * Return: Null if fail, new address if success.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
	return (*head);
}
