#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: Returns NULL
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		;
	dest = malloc(sizeof(char) * (x + 1));
	if (dest == NULL)
		return (NULL);
	for (y = 0; y < x; y++)
		dest[y] = str[y];
	return (dest);
}
