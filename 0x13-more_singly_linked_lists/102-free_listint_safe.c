#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the no of nodes in a linked list.
 * @head: pointer to the hesd of a linked list.
 * Return: 0 if not looped or no of nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *new, *copy;
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
 * free_listint_safe - frees a listint_t list safely.
 * @h: double pointer to address of the head of the linked list.
 * Return: size of list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new;
	size_t len, index;

	len = looped_listint_count(*h);

	if (len == 0)
	{
		for (; h != NULL && *h != NULL; len++)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
		}
	}
	else
	{
		for (index = 0; index < len; index++)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
		}

		*h = NULL;
	}

	h = NULL;

	return (len);
}

