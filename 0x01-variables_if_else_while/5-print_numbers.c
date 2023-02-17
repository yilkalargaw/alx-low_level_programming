#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main () {
	char ch=0;
   for(ch = 0 ; ch < 10 ; ch++)
	  printf(ch);

   putchar(10);

   return(0);
}
