#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar('%c,', num);
		num++;
	}

	return (0);
}
