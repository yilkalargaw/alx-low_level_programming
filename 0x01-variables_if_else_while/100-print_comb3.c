#include <stdio.h>

int main(void)
{
	char digit[4];
	unsigned int i;
	unsigned int j;

	for (i = 0; i < 9; i++)
	{
			for (j = i + 1; j < 10; j++)
			{
					putchar( i + '0');
					putchar( j + '0');
					if (i < 8)
					{
						putchar(',');
						putchar(' ');
					}
			}
	}

	return (0);
}
