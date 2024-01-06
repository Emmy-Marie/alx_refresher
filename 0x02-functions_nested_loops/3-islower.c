#include "main.h"

/**
 * _islower - A function that checks for lowercase characters.
 * @c: ASCII value of the character.
 * Return: 1 if character is lowercase and 0 if not lowercase.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
