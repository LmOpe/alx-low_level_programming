#include <stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: the string that is printed
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);

	while (i >= 0)
	{
		i -= 1;

		printf("%s\n", s[i]);
		i--;
	}
}
