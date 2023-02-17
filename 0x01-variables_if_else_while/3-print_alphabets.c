#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main () {
   for(char ch = 'a' ; ch <= 'z' ; ch++)
	  putchar(ch);

   for(char ch = 'A' ; ch <= 'Z' ; ch++)
	  putchar(ch);

   putchar(10);

   return(0);
}
