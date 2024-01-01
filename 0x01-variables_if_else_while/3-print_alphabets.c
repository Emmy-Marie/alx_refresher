#include <stdio.h>

/**
 * main - A program that prints the alphabets in lowercase and then uppercase
 * Return: 0 for success
 */

int main(void)
{
	char c = 97, y = 65;

	/* Printing lowercase alphabets */
	while (c < 123)
	{
		putchar(c);
		c++;
	}

	/* Printing uppercase alphabets */
	while (y < 91)
	{
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}
