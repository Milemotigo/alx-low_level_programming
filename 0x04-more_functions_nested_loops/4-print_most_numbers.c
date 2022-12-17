#include "main.h"

/**
 * print_most_numbers - print 14 rows and 10 columns
 *
 * Return:  prints the numbers, from 0 to 9, followed by a new line
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (!( n == 2 || n == 4))

		_putchar(n);
	}
	_putchar('\n');
}
