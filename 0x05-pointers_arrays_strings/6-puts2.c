#include "main.h"

/**
 * puts2 - A function that prints every second character of a string starting
 *         from the first character.
 * @str: A pointer to the string.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if ((i % 2) == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
