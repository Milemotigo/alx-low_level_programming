#include "main.h"
/**
 * _strcat - concat two strings
 * @dest:char
 * @src:char
 * Return:char
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
