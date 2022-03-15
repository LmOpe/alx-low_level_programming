#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 * print_alphabet - prints alphabets in lower case
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
