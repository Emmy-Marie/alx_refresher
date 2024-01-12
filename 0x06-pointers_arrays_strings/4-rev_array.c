#include "main.h"

/**
 * reverse_array - A function that reverses an array of integers.
 * @a: Array of integers.
 * @n: The number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	if ((n % 2) == 0)
	{
		i = 0;
		j = 1;
		temp = 0;
		while (i < (n / 2))
		{
			temp = a[i];
			a[i] = a[n - j];
			a[n - j] = temp;
			i++;
			j++;
		}
	}
	else
	{
		i = 0;
		j = 1;
		temp = 0;
		while (i <= (n / 2))
		{
			temp = a[i];
			a[i] = a[n - j];
			a[n - j] = temp;
			i++;
			j++;
		}
	}
}
