#include <stdio.h>

/**
 * puts2 - function that prints evey other charater of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || i % 2 == 0)
		{
		putchar(str[i]);
		i++;
		}
		else
		{
		i++;
		}
	}
	putchar('\n');
}
