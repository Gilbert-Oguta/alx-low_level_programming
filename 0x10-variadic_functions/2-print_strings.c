#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	char *str;
	va_list args;

	va_start(args, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (y < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
