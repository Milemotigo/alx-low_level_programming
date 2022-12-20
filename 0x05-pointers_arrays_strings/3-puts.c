#include "main.h"
/**
 * _puts - a funcrtion that prints a string
 * @str: the string
 * Return: 0;
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
}
