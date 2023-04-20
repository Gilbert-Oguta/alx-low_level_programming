#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int x = 0, y = 0, z = 0;
	const char t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[x])
	{
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int)), z = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), z = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), z = 1;
				break;
			case 's':
				str = va_arg(args, char *), z = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} x++;
	}
	printf("\n");
	va_end(args);
}
