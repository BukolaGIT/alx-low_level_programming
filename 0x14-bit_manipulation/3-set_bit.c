#include "main.h"

/**
 * set_bit - Write a function that set value of  bit to 1 at a given index.
 * @y: pointer to the number to change
 * @Bukola: index of the bit and  set to 1
 *
 * Return: 1 if it works, or -1 if an error occurred
 */
int set_bit(unsigned long int *y, unsigned int Bukola)
{
	if (Bukola > 63)
		return (-1);

	*y = ((1UL << Bukola) | *y);
	return (1);
}
