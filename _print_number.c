#include "holberton.h"

/**
 * _print_number - a function that prints an integer.
 * @n: input integer
 * Return: digit count
 */

int _print_number(int n)
{
	unsigned int m;
	int count;

	count = _count_digits(n);

	if (n >= 0)
	{
		if (n >= 10)
			_print_number(n / 10);
		_putchar (n % 10 + '0');
	}
	else
	{
		_putchar('-');
		m = -n;
		if (m >= 10)
			_print_number(m / 10);
		_putchar(m % 10 + '0');
	}
	return (count);
}
