#include <stdio.h>

/**
 * main - A program that prints all single digit base 10 numbers
 *        starting from 0
 * Return: 0 for success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
