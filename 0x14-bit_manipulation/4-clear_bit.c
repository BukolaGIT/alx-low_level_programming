#include "main.h"

/**
 * clear_bit - Write a function that set value of  bit to 0 at a given index.
 * @y: pointer to the number to change
 * @Bukola: index of  bit to clear
 *
 * Return: 1 if it works, or -1 if  error occurr
 */
int clear_bit(unsigned long int *y, unsigned int Bukola)
{
	if (Bukola > 63)
		return (-1);

	*y = (~(1UL << Bukola) & *y);
	return (1);
}
