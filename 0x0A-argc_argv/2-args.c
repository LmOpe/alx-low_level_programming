#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints all arguments it receives.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc > 0)
		for (counter = 0; counter < argc; counter++)
			printf("%s\n", argv[counter]);

	return (0);
}
