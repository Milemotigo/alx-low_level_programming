#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: value or -1 if the value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step;

	if (array == NULL)
		return (-1);
	prev = 0;
	step = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (step < size && array[step] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (prev <= step && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
