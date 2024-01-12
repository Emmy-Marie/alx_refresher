#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: A pointer to the destination where the string is to be copied.
 * @src: The string to be copied.
 * @n: The number of characters to be copied from src.
 * Return: The pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	/* Padding leftover bytes with null character */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
