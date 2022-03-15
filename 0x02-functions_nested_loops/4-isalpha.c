#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for lower or uppercase alphabets
 * @c: character to check
 * main - Entry point
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
