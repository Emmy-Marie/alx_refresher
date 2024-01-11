#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: A pointer to the integer array.
 * @n: The number of array elements to be printed.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((n - i) == 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
