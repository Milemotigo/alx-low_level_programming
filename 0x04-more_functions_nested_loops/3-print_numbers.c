#include "main.h"

/**
 * print_numbers -function that print digits.
 *
 * Return: 0 to 9
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
