#include "main.h"

/**
 * _strcpy - a function that copies the string
 * @dest: string to recieve a copy
 * @src: string copied
 * Return: success 0;
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
