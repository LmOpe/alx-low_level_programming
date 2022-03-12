#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* Return: Always 0 (success)
*/
/* betty style doc for function main goes there */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

  if(n>0)
  {
  printf(n, " is positive\n");
 } 
 else if(n==0)
 {
 printf(n, " is zero\n");
 }
 else if(n<0)
 {
 printf(n, "s negative\n");
 }

	/* your code goes there */

	return (0);

}
