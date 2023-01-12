#include "main.h"
#include <stdlib.h>
/**
 * _concat -  function that concatenates two strings
 * @s: first string
 * @s2: secnd string
 *
 * Return: Return char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, limit;
	char *dest;
	if (s1 == NULL)
		s1 = " ";
	if  (s2 == NULL)
		s2 =" ";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	dest = malloc(sizeof(char) * (i + j + 1));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dest[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
dest[k] = s2[j];
	return (dest);
}
