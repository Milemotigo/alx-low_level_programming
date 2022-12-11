#include <stdio.h>
/**
 * main - you tube
 *
 * Discripion:a program that prints all single digit
 * number of base 10 starting from 0
 *
 * Return:Always 0(Success)
 */
int main(void)
{
	int i;
	i = 48;
	while(i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
