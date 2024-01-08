#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers from 0 to 9
 *                      except 2 and 4 using putchar().
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c == '2' || c == '4')
			c++;
		else
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
