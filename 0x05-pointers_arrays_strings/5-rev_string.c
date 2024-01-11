#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	int length, right, left;

	/* Calculate length of the string */
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	left = 0;
	right = length - 1;

	/* Reverse the string by swapping */
	while (left < right)
	{
		char temp; /* Temporary variable to store values for swapping */

		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		/* Move left forward and right backward */
		left++;
		right--;
	}
}
