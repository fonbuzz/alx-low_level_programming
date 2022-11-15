#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: value if integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	/* remove last digit and recur */
	if (m / 10)
	{
		print_number(m / 10);
	}

	/* print last digit */
	_putchar((m % 10) + '0');
}
