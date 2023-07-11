#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: size of array
 *
 * Return: 
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int mid;

	if (!array || size == 0)
		return (-1);
	while (i < size)
	{
		mid = size / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			i += mid;
		else
			i -= mid;
	}
	return (-1);
}
