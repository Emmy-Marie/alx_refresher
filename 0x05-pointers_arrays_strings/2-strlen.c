#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
