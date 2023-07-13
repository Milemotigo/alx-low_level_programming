#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: a pointer to the arrays to search
 * @size: size of the array to search
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;
	
	low = 0;
	high = size - 1;
	
	if (array == NULL || size == 0)
		return (-1);
	
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (value == array[low])
				return low;
			return (-1);
		}
		
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		
		if (pos < high)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return -1;
		}
		if (array[pos] == value)
		{
			return (int)pos;
		}
		
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}
	return (-1);
}
