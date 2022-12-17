#include "main.h"

/**
 * main - print_numbers
 *
 * Return: 0 to 9
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
