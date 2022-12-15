#include "main.h"
/**
 * print_last_digit -prins the last digit
 *
 * @x:this is the ls digit of a number
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int a;

	if (x < 0)
		x = -x;
	a = x % 10;
	_putchar(a + '0');
	return (a);
}
