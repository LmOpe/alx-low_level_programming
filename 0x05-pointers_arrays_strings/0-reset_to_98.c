#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as param and updates its value it points to to 98
 * @n: the parameter to change its value
 * Return: 0
 */

void reset_to_98(int *n)
{
	*n = 98;

	return (*n);
}
