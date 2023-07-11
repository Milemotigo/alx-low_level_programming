#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search for
 *
 * Return: -1 0r value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1, i;
	int mid;

	if (!array || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
