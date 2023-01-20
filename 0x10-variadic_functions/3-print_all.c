#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char c = format[i];

	va_start(args, format);

	while (c != '\0')
	{
		if (c == 'c')
		{
			printf("%c", va_arg(args, int));
			printf(", ");
		}
		else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
			printf(", ");
		}
		else if (c == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (c == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		c = format[++i];
	}
	va_end(args);
	printf("\n");
}
