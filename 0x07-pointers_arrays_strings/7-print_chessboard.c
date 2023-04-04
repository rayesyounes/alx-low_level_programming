#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int nb1, nb2;

	for (nb1 = 0; a[nb1][7]; nb1++)
	{
		for (nb2 = 0; nb2 < 8; nb2++)
			_putchar(a[nb1][nb2]);

		_putchar('\n');
	}
}
