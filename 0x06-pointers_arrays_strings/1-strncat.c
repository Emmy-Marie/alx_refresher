#include "main.h"

/**
 * _strncat - A function that concatenates two strings using at most n bytes.
 * @dest: The string to be appended.
 * @src: The string used to append dest.
 * @n: The maximum number of bytes from src to be appended.
 * Return: The appended string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src;

	/* Length of dest */
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	/* Append src to dest */
	len_src = 0;
	while ((src[len_src] != '\0') && (len_src < n))
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
