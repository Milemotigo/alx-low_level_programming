#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the variable n
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("last digit of %d is %d ", n, m);
		if (m > 5)
		{
			printf("and is greater than 5\n");
		}
		else if (m == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and is less than 6 and not 0\n");
		}
		return (0);
}
