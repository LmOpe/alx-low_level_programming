#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * main - Entry point
 * Return: 0
 */

void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
