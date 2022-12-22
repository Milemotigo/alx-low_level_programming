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
	int i=0, len = 0, ch;

	while (s[i] != '\0')
	{
		len++;
	}
	for(i < (len)/ 2; i++;)
	{
		ch = s[i];
		s[i] = s[len - 1 -i];
		s[len - 1 - i] = ch;
	}
}
