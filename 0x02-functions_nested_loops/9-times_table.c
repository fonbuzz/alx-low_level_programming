#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mx, pd;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mx = 1; mx <= 9; mx++)
		{
			_putchar(',');
			_putchar(' ');

			pd = num * mx;

			if (pd <= 9)
				_putchar(' ');
			else
				_putchar((pd / 10) + '0');

			_putchar((pd % 10) + '0');
		}
		_putchar('\n');
	}
}
