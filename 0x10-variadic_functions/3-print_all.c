#include "variadic_functions.h"

/**
 * print_all - function that prints all arguments passed into it
 * @format: format specifier
 */

void _printf(const char * const format, ...)
{
    int num_args = strlen(format);

    va_list args;

    va_start(args, format);

    unsigned int i = 0;
  
    while (i < num_args)
    {
        if (format[i] == 'i')
        {
            int x = va_arg(args, int);

            printf("%d", x);
			if (i != (num_args - 1))
			{
				printf(", ");
			}
        }
        else if (format[i] == 'f')
        {
            double x = va_arg(args, double);

            printf("%f", x);
			if (i != (num_args - 1))
			{
				printf(", ");
			}
        }
        else if (format[i] == 'c')
        {
            char x = va_arg(args, int);

            printf("%c", x);
			if (i != (num_args - 1))
			{
				printf(", ");
			}
        }
        else if (format[i] == 's')
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
			if (i != (num_args - 1))
			{
				printf(", ");
			}
        }
        i++;

    }
    va_end(args);
    printf("\n");
}
