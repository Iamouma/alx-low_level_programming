#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: head of the doubly linked list.
 * Return: number of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		{
			printf("%d\n", h->n);
			h = h->next;
			len++;
		}
	}
	return (len);
}
