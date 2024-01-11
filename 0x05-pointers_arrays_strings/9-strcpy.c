#include "main.h"

/**
 * _strcpy - A function that copies the string from a source pointer to the
 *           buffer pointed to by a destination pointer.
 * @dest: A pointer to the destination.
 * @src: A pointer to the source.
 * Return: The pointer to the destination.
 */

char *_strcpy(char *dest, char *src)
{
	char *final_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (final_dest);
}
