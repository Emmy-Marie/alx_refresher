#include "main.h"

/**
 * print_numbers - A function that prints the numbers 0 to 9 using putchar().
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
