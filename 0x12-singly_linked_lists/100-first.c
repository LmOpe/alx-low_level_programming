#include "lists.h"

void startupFunc(void) __attribute__ ((constructor));

/**
 * startupFunc - function that get invoked before main function
 * Return: void
 */

void startupFunc(void)
{
printf("You're beat! and yet, you must allow,")
printf("I bore my house upon my back!\n");
}
