#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 *
 * Return:  prints zero
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))

		_putchar(a);
	}
	_putchar('\n');
}
