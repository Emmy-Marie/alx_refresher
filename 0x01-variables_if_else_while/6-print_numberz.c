#include <stdio.h>

/**
 * main - A program that prints all single digit base 10 numbers staring from 0
 *        using only the putchar() function
 * Return: 0 for success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
