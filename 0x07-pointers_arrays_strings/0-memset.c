#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * @n: byte of the memory area pointed to by s
 * @b: constant byte
 * @s: points to the memory area
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
return (0);
}
