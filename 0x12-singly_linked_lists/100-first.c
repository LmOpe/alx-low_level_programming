#include "lists.h"

void startupFunc (void) --attribute-- ((constructor));

/**
 * startupFunc - function that get invoked before main function
 * Return: void
 */

void startupFunc (void) 
{
  printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
