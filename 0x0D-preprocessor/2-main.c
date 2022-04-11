#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 * @argc: argument counter
 * @argv: pointer to argument
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
