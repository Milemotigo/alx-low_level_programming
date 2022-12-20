#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: int a
 * @b: int b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

