#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for uppercase character.
 * @c: The ASCII value of the character.
 * Return: 1 if uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
