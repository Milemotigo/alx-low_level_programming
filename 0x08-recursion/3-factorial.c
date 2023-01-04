#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: int to find the factorial of
 *
 * Return: factorial of the function
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
