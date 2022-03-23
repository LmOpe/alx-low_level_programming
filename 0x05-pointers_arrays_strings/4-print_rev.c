#include <stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: the string that is printed
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i >= 0)
	{
		i -= 1;

		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
