#include "search_algos.h"
/**
 * interpolation_search - searches sorted array of integers using
 *                        interpolation seaerch.
 * @array: pointer to the first element of the array to sesrch.
 * @size: number of elements in the array.
 * @value: value to search for
 * Return: -1 if the value is not found or array is NULL, else the
 *         first index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, c;

	if (array == NULL)
		return (-1);

	for (l = 0, c = size - 1; c >= l;)
	{
		i = l + (((double)(c - l) / (array[c] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			c = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
