#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: the string that its length is printed
 * Return: the legnth of the string
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
