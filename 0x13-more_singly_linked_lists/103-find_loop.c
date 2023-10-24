#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * Return: NULL if no loop, or address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new, *copy;

	if (head == NULL || head->next == NULL)
		return (NULL);

	new = head->next;
	copy = (head->next)->next;

	while (copy)
	{
		if (new == copy)
		{
			new = head;

			while (new != copy)
			{
				new = new->next;
				copy = copy->next;
			}

			return (new);
		}

		new = new->next;
		copy = (copy->next)->next;
	}
	return (NULL);
}
