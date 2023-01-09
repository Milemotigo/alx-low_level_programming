#include "stdio.h"

/**
 * main - prints all argument it recieves
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
