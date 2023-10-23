#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of alinked list.
 * @index: index to find in linked list starting at 0.
 * Return: pointer to node or NULL if it fails.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	while (len < index && head != NULL)
	{
		head = head->next;
		len++;
	}
	return (head);
}
