#include "main.h"

/**
 * print_triangle - A function that prints a triangle.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int i, j, k, l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		if (size == 1)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
		{
			i = 1;
			while (i <= size)
			{
				k = size - i;
				j = 0;
				while (j < k)
				{
					_putchar(' ');
					j++;
				}
				l = 0;
				while (l < i)
				{
					_putchar('#');
					l++;
				}
				i++;
				_putchar('\n');
			}
		}
	}
}
