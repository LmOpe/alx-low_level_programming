#include <stdio.h>

/**
*main - print lowercase alpha a-z but remove 'q' and 'e'
*Return: Always 0 (Success)
*/

int main(void)
{
	char num = '0';
  
  while (num <= '9')
  {
    putchar(num);
    num++;
  }
  putchar('\n');
	return (0);
}
