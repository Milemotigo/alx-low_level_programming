#include "main.h"

/**
 *print - alphabet
 *
 *Return:always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);
}
