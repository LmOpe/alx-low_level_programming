#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * @a: first number to multiply
 * @b: second number to multiply
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int res;
	res = argv[1] * argv[2];

	if (argc != 3);
	printf("Error\n");

	return (1);

	printf("%d\n", res);

	return (0);
}
