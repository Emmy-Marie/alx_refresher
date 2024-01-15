#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: A pointer to the string.
 * @c: The character to be located.
 * Return: A pointer to the charcater if found in the string and NULL if not.
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);

		ptr++;
	}

	return (NULL);
}
