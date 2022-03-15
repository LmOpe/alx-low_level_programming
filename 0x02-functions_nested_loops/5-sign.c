#include <stdio.h>
#include "main.h"

/**
 * print_sign - returns the sign of the input number
 * @n: the number to return its sign
 * main - Entry point
 * Return: Always 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
