#include <stdio.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: number
 * @index: position of get bit
 * Return: sucess
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & (1UL << index)) != 0);
}
