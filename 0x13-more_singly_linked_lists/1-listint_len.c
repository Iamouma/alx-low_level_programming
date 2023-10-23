#include "lists.h"
/**
 * listint_len - finds the number of elements in a linked listint_t list.
 * @h: pointer to the head of a linked list.
 * Return: number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
