#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head:double pointer to head.
 * @str: string to duplicate into new node.
 * Return: address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *box;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[i])
		i++;
	new_node->len = i;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		box = *head;

		while (box->next)
			box = box->next;
		box->next = new_node;
	}
	return (new_node);
}
