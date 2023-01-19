#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that execute a function
 *  given as a parameter
 *  @array: a pointer to an integer
 *  @size: size of the array
 *  @action: a pointer toa function that takes an
 *  integer as an argument
 *  Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
