#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0(Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("size of a char: %ld byte(s)\n",(long unsigned int)sizeof(a));
	printf("size of an int: %ld byte(s)\n",(long unsigned int)sizeof(b));
	printf("size of a long int: %ld byte(s)\n",(long unsigned int)sizeof(c));
	printf("size of a long long int: %ld byte(s)\n",(long unsigned int)sizeof(d));
	printf("size of a float: %ld byte(s)\n",(long unsigned int)sizeof(e));
	return (0);
}
