#include <stdio.h>

/**
*main - print lowercase alpha a-z but remove 'q' and 'e'
*Return: Always 0 (Success)
*/

int main(void)
{
	int  num = 0;

	while(num <= 9)
	{
		putchar('%c', num);
		num++;
	}
	
	return (0);
}
