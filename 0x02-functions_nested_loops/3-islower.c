#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - checks for lowercase alphabets
 * main - Entry point
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
