#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int i;
	unsigned int w;
	unsigned int x;
	unsigned int y;
	unsigned int z;

	for (i = 0; i < 10000; i++)
	{
		w = i / 1000;
		x = (i % 1000) / 100;
		y = (i % 100) / 10;
		z = i % 10;

		if (w < y || (w == y && y < z))
		{
			putchar('0' + w);
			putchar('0' + x);
			putchar(' ');
			putchar('0' + y);
			putchar('0' + z);

			if (!(w == 8 && x == 9 && y == 9 && z == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
