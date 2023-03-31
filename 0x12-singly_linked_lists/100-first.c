#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - print the sentense
 */
void hare(void)
{
	printf("%s%s", "You're beat! and yet, you must allow,\n",
		   "I bore my house upon my back!\n");
}
