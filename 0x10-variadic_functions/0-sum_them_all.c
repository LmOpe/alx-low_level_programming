#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of the parameters
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sums = 0, i;

	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int tmp = va_arg(args, int);

		sums += tmp;
	}
	va_end(args);

	return (sums);
}
