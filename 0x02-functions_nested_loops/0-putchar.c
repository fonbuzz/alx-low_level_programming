#include "main.h"

/**
 * main - Print putchar
 * Return: Always 0.
 */
int main(void)
{
	int txt[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int count, num;

	num = sizeof(txt) / sizeof(int);

	for (count = 0; count < num; count++)
	{
		_putchar(txt[count]);
	}

	_putchar('\n');

	return (0);
}
