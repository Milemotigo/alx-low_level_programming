#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
}
