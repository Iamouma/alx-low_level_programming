#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlinked list.
 * @h: head of a doubly linked list.
 * Return: number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
