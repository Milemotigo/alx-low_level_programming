#include "main.h"

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int i = 0, count = 0;
	char first;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		s--;
	for (i = 0; i < (count) / 2; i++)
	{
		first = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = first;
	}
}
