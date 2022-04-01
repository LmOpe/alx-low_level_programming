#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: Always 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
