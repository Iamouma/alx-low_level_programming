#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: double pointer to head of a linked list.
 * @index: index of node to delete, starting at 0.
 * Return: 1 if successful, -1 if fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *copy;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
		return (1);
	}
	new = *head;

	while (len != index - 1 && new->next != NULL)
	{
		new = new->next;
		len++;
	}
	if (len == index - 1 && new->next != NULL)
	{
		copy = new->next;
		new->next = copy->next;
		free(copy);
		return (1);
	}
	return (-1);
}
