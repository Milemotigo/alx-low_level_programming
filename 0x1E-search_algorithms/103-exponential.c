#include "search_algos.h"

/**
 * print_array - Prints the elements of an array between two indices.
 * @array: Pointer to the first element of the array.
 * @start: The starting index.
 * @end: The ending index.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search_recursive - Recursive implementation of binary search.
 * @array: Pointer to the first element of the array.
 * @left: The left bound of the subarray to search.
 * @right: The right bound of the subarray to search.
 * @value: The value to search for.
 *
 * Return: Index where the value is located, or -1 if not found.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		return (binary_search_recursive(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound >= size)
		bound = size - 1;
	printf("Value found between indexes[%lu] and [%lu]\n", bound / 2, bound);
	return (binary_search_recursive(array, bound / 2, bound, value));
}
