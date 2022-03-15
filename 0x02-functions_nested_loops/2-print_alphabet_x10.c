#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 * main - Entry point
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}
