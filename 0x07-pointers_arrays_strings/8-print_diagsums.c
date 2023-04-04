#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiagonal1, sumDiagonal2;

	size1 = 0;
	sumDiagonal1 = 0;
	sumDiagonal2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDiagonal1 = sumDiagonal1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiagonal2 = sumDiagonal2 + a[i];
	}
	printf("%d, %d\n", sumDiagonal1, sumDiagonal2);
}
