#include "main.h"
/**
 * puts_half - A function that prints half a string
 *
 * str:string
 * discription: strings
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0, l = 0, mid, n;

	mid = l / 2;
	while (str[l] != '\0')
		l++;
	i = i + 1;
	for (i = mid; i <= n; i++)
		n = (l - 2) / 2;
	if (n % 2 != 0)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
