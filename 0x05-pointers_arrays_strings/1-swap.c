#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: A pointer to the firt integer.
 * @b: A pointer to the second integer.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
