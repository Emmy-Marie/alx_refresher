#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @n: The integer value to be checked.
 * Return: The last digit of the n.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}
