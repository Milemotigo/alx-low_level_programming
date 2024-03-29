#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - A function that searches for a value
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: Value to search for
 *
 * Return: idx and values
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (!array || size == 0)
		return (-1);

	for (; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}
	return (-1);
}
