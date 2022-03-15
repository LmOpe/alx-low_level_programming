#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 * main - Entry point
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		i++;
		putchar('\n');
	}
}
