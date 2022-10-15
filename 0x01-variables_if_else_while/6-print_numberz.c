#include <stdio.h>
/**
 * main - single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int bn;

	for (bn = 0; bn <= 9; bn++)
		putchar((bn % 10) + '0');

	putchar('\n');

	return (0);
}
