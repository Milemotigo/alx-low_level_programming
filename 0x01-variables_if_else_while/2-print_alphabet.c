#include <stdio.h>
/**
 * main - prints the alpabet in low case
 *
 *  Return: always returns 0 (Success)
 *
 */
int main(void)
{
int i = 97;
while (i < 123)
{
putchar(i);
i++;
}
putchar(10);
return (0);
}
