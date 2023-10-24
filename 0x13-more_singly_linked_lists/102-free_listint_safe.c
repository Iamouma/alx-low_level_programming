#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer to the head of a linked list.
 * Return: size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new, *copy;
	size_t len;

	len = 0;
	new = *h;
	while (new != NULL)
	{
		len++;
		copy = new;
		new = new->next;
		free(copy);

		if (copy < new)
			break;
	}
	*h = NULL;

	return (len);
}
