#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: 2D array of char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column;

	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
}
