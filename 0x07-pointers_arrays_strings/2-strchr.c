#include "main.h"

/**
 * _strspn - locates a character in a string.
 *
 * @s: String
 * @c: character to locate
 * Return: c or Nulll
 */
char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}