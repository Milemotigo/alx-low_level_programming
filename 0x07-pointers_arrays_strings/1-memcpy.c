#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @src: memory area
 * @dest: memory area 2
 * @n: number of bytes to be copied
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
