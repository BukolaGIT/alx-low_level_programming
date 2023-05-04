#include "main.h"

/**
 * flip_bits - Write a function that returns number of bits that flip
 * to get from one number to another
 * @q: first number
 * @r: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int q, unsigned long int r)
{
	int u, count = 0;
	unsigned long int current;
	unsigned long int exclusive = q ^ r;

	for (u = 63; u >= 0; u--)
	{
		current = exclusive >> u;
			if (current & 1)
			count++;
	}

	return (count);
}
