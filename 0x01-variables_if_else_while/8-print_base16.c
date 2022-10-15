#include <stdio.h>
/**
 * main - Prints all possible combinations of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int base16;

	for (base16 = 0; base <= 9; base++)
	{
		putchar((base % 10) + '0');
		if (base == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
