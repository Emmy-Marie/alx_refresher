#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line.
 * @n: The number of times the character is printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		/* Print "\" n times */
		for (i = 1; i <= n; i++)
		{
			/* If n is 1, print "\" just once */
			if (n == 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				/* If n > 1, print spaces before "\" */
				for (j = 0; j < i; j++)
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
