#include "main.h"

/**
 * print_most_numbers - prints all integers except 2 and 4
 * main - Entry point
 * Return: 0
 */

void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num !== 2 && !== 4)
		{
			_putchar(num);
		}
		else
		{
		num++;
		}
	}
	_putchar('\n');
}
