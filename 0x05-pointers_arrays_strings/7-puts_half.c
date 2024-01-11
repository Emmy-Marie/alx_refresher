#include "main.h"

/**
 * puts_half - A function that prints half of a string.
 * @str: A pointer to the string.
 */

void puts_half(char *str)
{
	int length, half;

	/* Length of the string */
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	/* Dividing length into 2 */
	if ((length) % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	/* Printing half of the string */
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
