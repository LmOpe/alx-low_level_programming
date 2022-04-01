#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: Always 0(success)
 */

int main (int argc, char *argv[])
{
  if (argc > 0)
  {
    printf("%d\n", argc);
  }
  
  return (0);
}
