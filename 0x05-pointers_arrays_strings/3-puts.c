#include "main.h"
/**
 * _puts - a funcrtion that prints a string
 * @str: the string
 * Return: 0;
 */
void _puts(char *str)
{
	int j = 0;

	for (str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
}
