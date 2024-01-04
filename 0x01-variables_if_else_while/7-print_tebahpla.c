#include <stdio.h>

/**
 * main - A program that prints the lowercase alpabets in reverse using only
 *        the putchar() function.
 * Return: 0 for success & 1 for unsuccessful.
 */

int main(void)
{
	char c = 'z';

	while (c)
	{
		if (c == 'a')
		{
			putchar(c);
			break;
		}

		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
