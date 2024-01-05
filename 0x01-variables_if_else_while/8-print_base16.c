#include <stdio.h>

/**
 * main - A program that prints all base 16 numbers in lowercase using
 *        only the putchar() function
 * Return: 0 for success
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (i < 16)
	{
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
