#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: the parameter its length is returned
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
 * puts_half - function that prints half of a string
 * @str: the string that its half is pinted
 */

void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);

	while (str[i] != '\0')
	{
		if ((len % 2) != 0)
		{
			i = (len - 1) / 2;
			putchar(str[i]);
		}
		else
		{
			i = len / 2;
			putchar(str[i]);
		}
	}
	putchar('\n');
}
