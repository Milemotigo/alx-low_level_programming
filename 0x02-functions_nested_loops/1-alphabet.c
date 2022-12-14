#include "main.h"

/**
 * print_alpabet - print lowercase
 *
 * Return:always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
