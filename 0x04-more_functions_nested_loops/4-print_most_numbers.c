#include "main.h"

/**
 * print_most_numbers-print 14 rows and 10 columns
 *
 * Return:  prints the numbers, from 0 to 9, followed by a new line
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (!( a == 2 || a == 4))
		_putchar("%d", a );
	}
	_putchar("\n");
}
