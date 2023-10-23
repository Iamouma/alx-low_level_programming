#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of a linked list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
