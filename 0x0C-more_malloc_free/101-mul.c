#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * exit: 98
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");

		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (isdigit(num1) && isdigit(num2))
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
	printf("Error\n");
	exit(98);
}
