#include "main.h"

/**
 * print_binary - Write a function that prints  binary to represent a number.
 * @n: The Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int h, count = 0;
	unsigned long int current;

	for (h = 63; h >= 0; h--)
	{
		current = n >> h;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
