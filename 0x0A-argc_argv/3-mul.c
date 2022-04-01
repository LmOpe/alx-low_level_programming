#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int res;
	res = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3);
	{
		printf("Error\n");
		
		return (1);
	}
	printf("%d\n", res);

	return (0);
}
