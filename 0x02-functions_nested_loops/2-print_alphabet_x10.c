#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times of the alphabet
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letters;

	while (count++ <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
