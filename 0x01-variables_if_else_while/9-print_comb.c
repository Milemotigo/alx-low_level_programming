#include <stdio.h>
/**
 * main - betty
 *
 * Return:Always return 0 (Success)
 */
int main(void)
{
int i;

i = 48;

while (i < 58)
{
putchar(i);
if (i != 57)
{
putchar (44);
putchar(32);
}
i++;
}
putchar(10);
return (0);
}
