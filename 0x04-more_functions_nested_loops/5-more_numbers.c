#include "main.h"

/**
 *
 * more_numbers -  a function that prints 10 times the numbers
 *
 * Return: 0 to 14
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar("%d", b);
		}
		_putchar("\n");
	}
}

