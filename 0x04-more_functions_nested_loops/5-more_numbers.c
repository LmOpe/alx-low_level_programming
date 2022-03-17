#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	char i;
	char num;

	for (i = '0'; i < '10'; i++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
