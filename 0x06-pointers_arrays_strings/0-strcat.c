#include "main.h"
/*
 * _strcat - a function that concatenates two strings
 * @src: source
 * @dest: destination
 * return: char:
 */
char *_strcat(char *dest, char *src)
{
	char *str3 = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (str3);
}
