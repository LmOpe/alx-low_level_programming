#include <stdio.h>
#include "main.h"

/**
 * _abs - retuns the absolute value of the input
 * @n: the number to return its absolute value
 * main - Entry point
 * Return: always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
