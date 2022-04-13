#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name of the person
 * @f: pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
}
