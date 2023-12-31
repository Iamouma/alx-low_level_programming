#include "lists.h"
/**
 * free_list - frees a list.
 * @head: head of a linked list.
 */
void free_list(list_t *head)
{
	list_t *box;

	box = head;

	while (head != NULL)
	{
		box = head;
		head = head->next;
		free(box->str);
		free(box);
	}
	free(head);
}
