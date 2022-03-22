#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: the string that is printed
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(*str[i]);
		i++;
	}
	putchar('\n');
}
