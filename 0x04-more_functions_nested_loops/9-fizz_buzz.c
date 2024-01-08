#include <stdio.h>

/**
 * main - A program that prints 1 to 100. The program prints "Fizz" for
 *        multiples of 3, "Buzz" for multiples of 5 and "FizzBuzz" for
 *        multiples of both 3 and 5.
 * Return: 0 for success.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
