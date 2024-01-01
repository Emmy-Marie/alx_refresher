#include <stdio.h>

/**
 * main - A program that prints the alphabets in lowercase using the putchar()
 *        function only
 * Return: 0 for success
 */

int main(void)
{
	char c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
