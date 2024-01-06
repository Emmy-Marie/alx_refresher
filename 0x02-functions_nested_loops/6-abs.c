#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer.
 * @n: An integer value.
 * Return: absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
