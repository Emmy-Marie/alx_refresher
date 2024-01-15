#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: A pointer to the memory location.
 * @b: The constant byte.
 * @n: The number of bytes to be filled.
 * Return: Pointer to the memory location.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
