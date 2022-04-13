#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array that contain the integers
 * @size: size of the array
 * @cmp: pointer to the function to be used
 */

int int_index(int *array, int size, int (*cmp)(int))
