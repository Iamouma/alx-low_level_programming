#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint linked list including mem address.
 * @head: pointer to the head of a linked list.
 * Return: the number of nodes in list, if it fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new;
	size_t len;
	const listint_t *copy;

	new = head;
	if (new == NULL)
		exit(98);

	len = 0;
	while (new != NULL)
	{
		copy = new;
		new = new->next;
		len++;
		printf("[%p] %d\n", (void *)copy, copy->n);

		if (copy < new)
		{
			printf("-> [%p] %d\n", (void *)new, new->n);
			break;
		}
	}
	return (len);
}
