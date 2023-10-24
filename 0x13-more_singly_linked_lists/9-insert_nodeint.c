#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of a linked list.
 * @idx: insert node at index, starting count at 0.
 * @n: integer value to store in node.
 * Return: address of new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *copy;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	copy = *head;
	while (len != idx - 1 && copy != NULL)
	{
		copy = copy->next;
		len++;
	}

	if (len == idx - 1 && copy != NULL)
	{
		new->next = copy->next;
		copy->next = new;
		return (new);
	}
	return (NULL);
}
