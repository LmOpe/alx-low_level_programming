#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string that separates each number
 * @n: number of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 1; i <= n; i++)
	{
		if (i != n)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		else if (i == n)
		{
			printf("%d", va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");
}