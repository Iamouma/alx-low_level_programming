#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the no of nodes in a looped  linked list.
 * @head: pointer to the head of alinked list.
 * Return: 0 if the list is not looped, or the no of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *new, *copy;
	size_t len = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	new = head->next;
	copy = (head->next)->next;

	while (copy)
	{
		if (new == copy)
		{
			new = head;
			while (new != copy)
			{
				len++;
				new = new->next;
				copy = copy->next;
			}

			new = new->next;
			while (new != copy)
			{
				len++;
				new = new->next;
			}

			return (len);
		}

		new = new->next;
		copy = (copy->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: pointer to the head of a linked list.
 * Return: number of node in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len, index = 0;

	len = looped_listint_len(head);

	if (len == 0)
	{
		for (; head != NULL; len++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < len; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (len);
}
