#include "main.h"

/**
 * get_bit - Write a function  return the value of a bit at a given index.
 * @y: search number
 * @Bukola: index of a bit
 *
 * Return: the value of  bit at index  or -1 if an error occured
 */
int get_bit(unsigned long int y, unsigned int Bukola)
{
	int bit_val;

	if (Bukola > 63)
		return (-1);

	bit_val = (y >> Bukola) & 1;

	return (bit_val);
}
