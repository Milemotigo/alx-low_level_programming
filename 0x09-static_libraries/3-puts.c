#include "main.h"



/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */
void _puts(char *str)
{
	int a =0;

	while (str[a] != '\n')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
