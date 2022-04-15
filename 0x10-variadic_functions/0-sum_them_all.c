#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of the parameters
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sums = 0;

	int x = 0;

	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	while (x < n)
	{
		int tmp = va_arg(args, int);

		sums += tmp;
		x++;
	}
	va_end(args);

	return (sums);
}
