#include <stdio.h>

/**
 * main - A program that prints all the lowercase alphabets except q and e
 *        using only the putchar() function
 * Return: 0 for success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');

	return (0);
}
