#include "search_algos.h"

/**
 * recursion -  a function that searches for a value in a sorted
 * array of integers
 * @array: pointer to the first element of the array
 * @left: first element of the array
 * @right: last element of the array
 * @value: value to search for
 *
 * Return: 0 or -1 if out of range
 */

int recursion(int *array, int left, int right, int value)
{
	int mid, i;

	if (left > right || array == NULL)
		return (-1);
	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
	if (array[mid] > value)
		return (recursion(array, left, mid - 1, value));
	else if (array[mid] < value)
		return (recursion(array, mid + 1, right, value));
	if (mid == left || array[mid - 1] != value)
		return (mid);
	return (recursion(array, left, mid - 1, value));
}
/**
 * advanced_binary - perform a binary search using recursion
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search for
 *
 * Return: 0 or -1 if out of range
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (recursion(array, 0, size - 1, value));
}
