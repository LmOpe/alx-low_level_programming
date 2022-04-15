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

	if (n > 0)
	{
		va_start(args, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
