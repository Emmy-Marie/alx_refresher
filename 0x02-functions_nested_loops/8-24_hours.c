#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day starting from
 *              00:00 to 23:59.
 */

void jack_bauer(void)
{
	/* ab:cd will represent each possible digit 00:00 respectively */
	/* Max values: a = 2, b = 9, c = 5, d = 9 */
	int a, b, c, d;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 10)
		{
			/* When 24:00 is reached, exit loop */
			if (a == 2 && b == 4)
				break;
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					/* When xx:59 is reached, exit loop */
					if (c == 5 && d == 9)
						break;
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
