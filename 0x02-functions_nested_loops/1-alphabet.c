#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function that prints all the lowercase alphabets using
 *                  the user defined putchar() function.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
