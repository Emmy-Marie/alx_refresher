#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: The ASCII value of the character.
 * Return: 1 if a digit and 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
