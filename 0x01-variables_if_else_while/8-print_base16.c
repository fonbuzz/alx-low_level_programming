#include <stdio.h>
/**
 * main - Prints all possible combinations of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int nums;
	char letters;

	for (nums = 0; nums <= 9; nums++)
		putchar((nums % 10) + '0');

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');

	return (0);
}
