#include "main.h"

/**
 * _strpbrk - the function that locates the first occurance of a string
 * @s: string
 * @accept: input
 * Return: Returns a pointer to the byte in s & Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}

