#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list args;

	va_start(args, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(args, int));
		if (y < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
