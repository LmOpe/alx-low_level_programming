#include "variadic_functions.h"
/**
 * print_strings - function that print string
 * @separator: separates each argument
 * @n: number of argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 1; i <= n; i++)
		{
			char *x = va_arg(args, char *);

			if (x == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", x);
			}
			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
