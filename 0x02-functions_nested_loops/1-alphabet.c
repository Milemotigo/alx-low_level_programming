#include "main.h"

/**
 * main- print_alphabet
 * Description: print alphabet in lowercase
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
