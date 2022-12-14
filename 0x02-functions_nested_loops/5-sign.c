#include "main.h"
/**
 * print_sign - prints a sign of a number
 *
 * @c:The character to be checked
 *
 * Return: Returns 1 and prints + if n is greater than zero
 * Return: 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
	}
	return (1);
	if else (n = 0)
	{
		_putchar(48);
	}
	return (0);
	else (n < 0)
	{
		_putchar(45);
	}
	return (-1);
}
