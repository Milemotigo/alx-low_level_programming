#include <stdio.h>
/**
 * main - alway llost
 *
 * Return:always return 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i < 41)
			putchar(i - 10 + 'A');
		i++;
	}
	return (0);
}
