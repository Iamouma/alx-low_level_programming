#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of a linked list.
 * Return: address of node where loop starts , or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new, *copy = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	new = new->next;
	copy = copy->next->next;

	while (copy && copy->next)
	{
		if (new == copy)
			break;
		new = new->next;
		copy = copy->next->next;
	}

	if (new != copy)
		return (NULL);
	new = head;
	while (new != copy)
	{
		new = new->next;
		copy = copy->next;
	}
	return (new);
}
