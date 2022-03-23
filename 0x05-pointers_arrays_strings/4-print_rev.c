#include <stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: the string that is printed
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	len -= 1;

	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}
