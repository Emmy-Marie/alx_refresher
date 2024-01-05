#include <stdio.h>

/**
 * main - A program that prints all possible combination of single digit
 *        numbers using the putchar() function only
 * Return: 0 for success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
