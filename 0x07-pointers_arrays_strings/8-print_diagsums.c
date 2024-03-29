#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of two diagonals of a square
 *                  matrix of integers.
 * @a: A pointer to the square matrix.
 * @size: The matrix size.
 */

void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 = sum_1 + a[i * size + i];
		sum_2 = sum_2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
