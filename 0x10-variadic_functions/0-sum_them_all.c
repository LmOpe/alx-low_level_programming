#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of the parameters
 * @...: subsequent arguments
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	int sums = 0;

	int x = 0;

	while (x < n)
	{
		int sum = va_arg(args, int);

		sums += sum;
		x++;
	}
	va_end(args);

	return (sums);
}
