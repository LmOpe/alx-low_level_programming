#include <stdio.h>
#include "main.h"
/**
 * print-alphabet - prints lowercase alphabet
 * main - Entry point
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
