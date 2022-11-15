#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: value if integer
 * Return: void
 */
void print_number(int n)
{
	for (i = 100; i > 1; i/10)
{
		putchar(n/i + '0');
		n = n%i;
		if (i==10)
			putchar(n + '0')
}
