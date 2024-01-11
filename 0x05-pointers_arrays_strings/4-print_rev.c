#include "main.h"

/**
 * print_rev - A function that prints a string in reverse.
 * @s: A pointer to the string.
 */

void print_rev(char *s)
{
	int i, length;

	/* Calculating the length of the string */
	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Printing the string in reverse */
	i = 0;
	while (length >= i)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
