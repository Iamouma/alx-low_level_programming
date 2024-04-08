#include "search_algos.h"
/**
 * jump_search - searches a sorted array of integers using jump search.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: -1 if the value is not present or the array is NULL,
 *         else the index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, len, jump;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (i = len = 0; len < size && array[len] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", len, array[len]);
		i = len;
		len += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, len);

	len = len < size - 1 ? len : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
