#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: A pointer to the copied memory.
 * @src: A pointer to the are to be copied.
 * @n: The number of bytes to be copied.
 * Return: The pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
