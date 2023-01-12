#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - a function that creates an array of char
 * @size: size of array
 * @c: char to initialize
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *qrt;
	char *saved;

	if (size == 0)
		return (NULL);
	qrt = malloc(sizeof(char) * size);
	if (qrt == NULL)
		return (NULL);
	saved = qrt;
	while (size > 0)
	{
		*qrt = c;
		qrt = qrt + 1;
		size--;
	}
	return (saved);
}
