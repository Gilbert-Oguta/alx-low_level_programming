#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: arguments
 * Return: sum of thr list
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int y;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (y = 0; y < n; y++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
