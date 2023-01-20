#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints string
 * @n: last argument
 * @separator: string for string seperation
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
		str = "(nil)";
		{
			printf("%s", str);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

