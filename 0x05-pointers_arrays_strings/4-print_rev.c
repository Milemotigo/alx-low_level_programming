#include "main.h"

/**
 * print_rev - function that print a string
 * @s: the string
 * Return 0;
 */
void print_rev(char *s)
{
	int a = 0;
	while (s[a] != '\0');
	{
		_putchar(s[a]);
		a--;
	}
_putchar('\n');
}

