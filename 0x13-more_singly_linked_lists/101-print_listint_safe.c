#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of a linked list.
 * Return: number of nodes in the list, or if it fails exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new;
	const listint_t *copy;
	size_t len;

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
