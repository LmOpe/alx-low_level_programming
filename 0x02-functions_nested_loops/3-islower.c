#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 * @c: character to check
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
