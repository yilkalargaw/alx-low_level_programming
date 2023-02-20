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

		if (((w * 10) + x) >= ((y*10) + z))
			continue;

		putchar('0' + w);
		putchar('0' + x);
		putchar(' ');
		putchar('0' + y);
		putchar('0' + z);

		if (!(w == 9 && x == 8 && y == 9 && z == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
