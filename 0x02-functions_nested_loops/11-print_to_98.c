#include <stdio.h>

/**
 * print_to_98 - A function that prints all natural numbers from n to 98.
 * @n: The first integer number of the list.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n++;
		}
		putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n--;
		}
		putchar('\n');
	}
}
