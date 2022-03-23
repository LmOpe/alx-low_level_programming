#include <stdio.h>

/**
 * puts2 - function that prints evey other charater of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\\')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
