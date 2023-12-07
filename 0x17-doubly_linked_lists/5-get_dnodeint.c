#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlinked list.
 * @head: pointer to the head of a list.
 * @index: index of each node.
 * Return: NULLif fail, nth node of a linked list success.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	while ((len < index) && head != NULL)
	{
		head = head->next;
		len++;
	}

	if (len == index)
		return (head);

	return (head);
}
