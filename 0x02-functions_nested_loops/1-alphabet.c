#include <stdio.h>
#include "main.h"

/**
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
	putchar("\n");
}

int main(void)
{
	print_alphabet();
	return (0);
}
