#include "main.h"
#include<stdlib.h>
#include <string.h> 
#include <stddef.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory
 * @str: the src
 * Return: Returns NULL
 */
int _strlen(char *t)
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	int len;
	len = 0;
	while (*t != '\0')
	{
		len = len + 1;
		t = t + 1;
	}
	return (t);

char *_strdup(char *str)

	int len = 0;
	char *saved;
	char *dest;
	len = _strlen(str);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	 char *_strcpy(char *dest, char *str)
	saved = t;
	while(*str != '\0')
	{
		*dest = *str;
		dest = dest + 1;
		str = str + 1;
	}
	*dest = '\0'
	return (saved);
}
