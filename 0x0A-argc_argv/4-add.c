#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if there is a non digit arguments
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (counter = 1; counter <= argc; counter++)
	{
		if (typeof(argv[counter]) != "int")
		{
			printf("Error\n");
			return (1);
		}

		atoi(argv[counter]) += atoi(argv[counter]);
	}
	pintf("%d\n", atoi(argv[counter]));

	return (0);
}

