#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array that contain the integers
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * Return: -1 if no element matches, something else otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
}
