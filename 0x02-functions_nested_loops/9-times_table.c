#include "main.h"

/**
 * times_table - A function that prints the 9 times table starting from zero.
 */

void times_table(void)
{
	int i, j, num;

	i = 0;
	while (i < 10)
	{
		j = 0;
		num = 0;
		while (j < 10)
		{
			num = i * j;
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
				_putchar(num + '0');

			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
