#include <stdio.h>
/**
 * main - alphabet
 *
 *Return:always 0 (Success)
 */

int main(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
