#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function.
 * @array: elements to be printed
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != 0 && action != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
