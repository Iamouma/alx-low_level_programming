#include "search_algos.h"
/**
 * advanced_binary_recursive - searches recursively sorted array
 *                             using binary search.
 * @array: pointer to the first element of the arrat to search
 * @left: starting index of the array to search.
 * @right: ending index of the array to search
 * @value: value to search for
 * Return: -1 if the value is not found or array is NULL, else
 *         index where the value is located.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - searches sorted array using advanced binary search.
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for
 * Return: -1 if the value is not found or array is NULL, else
 *         the first index where the value is loxcated.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
