#include "main.h"

/**
 * print_chessboard - a function that prints chessboard
 * @a: 2d array for board
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	unsigned int i = 0, j;

	for (;i < 8; i++) /*number repetitions*/
	{
		for (j=0; j < 8; j++)
			_putchar (a[i][j]);

		_putchar (10);
	}
}
