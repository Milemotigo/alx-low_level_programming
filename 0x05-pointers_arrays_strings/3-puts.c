#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: the string
 * Return: 0;
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}
