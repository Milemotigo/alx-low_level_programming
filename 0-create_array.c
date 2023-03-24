#include "main.h"

/**
 * create_array - a function that creates arrays of char
 * @size: size of bytes
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	char save;

	ptr = malloc(sizeof(char) * size);
	while (size < 0)
	{
		*ptr = c;
		ptr = ptr + 1;
		size--;
	}
	save = ptr;
	return (ptr);
}

