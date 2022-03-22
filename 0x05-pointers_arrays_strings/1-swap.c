#include <stdio.h>

/**
 * swap_int - functions that swaps the values of two ints
 * @a: first parameter
 * @b: second parameter
 * @c: third variable that store one value temporaily
 */

void swap_int(int *a, int *b)
{
	int *c;
	*c = *a;

	*a = *b;
	*b = *c;
}
