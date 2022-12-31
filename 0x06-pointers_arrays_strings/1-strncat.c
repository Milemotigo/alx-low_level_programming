#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
                j++;
	}
	dest[j] = '\0';
	return (dest);
}
