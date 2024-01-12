#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: The string to be appended.
 * @src: The string used to append dest.
 * Return: The appended string.
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;

	/* Find length of dest string */
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	/* Append src to dest */
	len_src = 0;
	while (src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';

	return (dest);
}
