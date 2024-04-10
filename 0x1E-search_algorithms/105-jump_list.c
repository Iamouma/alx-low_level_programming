#include "search_algos.h"
/**
 * jump_list - searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: pointer to the head of the linked list to search.
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: NULL if the value is not found or the head of the list
 *         is NULL, else a pointer to the first node
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, j;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	i = 0;
	j = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (i += j; jump->index < i; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
			jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
