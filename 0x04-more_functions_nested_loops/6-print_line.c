#include "main.h"

/**
 * print_line - A function that draws a straight line.
 * @n: The number of times the character should be printed.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
