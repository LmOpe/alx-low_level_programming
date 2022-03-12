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
string t1= " is positive";
string t2= " is zero";
string t3= " is negative";
  if(n>0)
  {
  printf("%i %s", n, t1);
 } 
 else if(n==0)
 {
 printf("%i %s", n, t2);
 }
 else if(n<0)
 {
 printf("%i %s", n, t3);
 }

	/* your code goes there */

	return (0);

}
