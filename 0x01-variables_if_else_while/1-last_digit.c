#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable n
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("last digit of %d is %d ", n, m);
		if (m > 5)
		{
			printf(" and is greater than 5");
		}
		if (m == 0)
		{
			printf(" and is 0");
		}
		if (m < 6 && m != 0)
		{
			printf(" and is less than 6 and not 0");
		}
		printf("\n");
		return (0);
}
