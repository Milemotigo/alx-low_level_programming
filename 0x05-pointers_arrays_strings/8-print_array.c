#include "main.h"
#include <stdio.h>
/**
 * print_array - function that print n element of array
 * @n: int check
 * @a: int check
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 10)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	printf("\n");
}
