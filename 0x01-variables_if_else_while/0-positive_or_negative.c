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
  printf("is positive%i\n", n);
 } 
 else if(n==0)
 {
 printf("is zero%i\n", n);
 }
 else if(n<0)
 {
 printf("is negative%i\n", n);
 }

	/* your code goes there */

	return (0);

}
