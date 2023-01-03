#include "main.h"

/**
 * _strspn - a function that get the length of a
 * Description: prefix substring
 *                                                 * @s: pointer to string
 * @accept: pointer to string
 * Return: the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
        int i, j, k;

        k = 0;

        for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
		k++;
		}
		}
		else                                      return (k);
	}
	return (k);
}	
