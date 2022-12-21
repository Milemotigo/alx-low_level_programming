#include "main.h"

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int i, l, j;
	
	while (s[i] != '\0')
        {
                i++;
                l++;
	}
        for (i = 0; i < l/2; i++)
	{
		j = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 -i] = j;
	}
}
