#include "main.h"

/**
 * get_endianness -Write a function that checks the endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *p = (char *) &t;

	return (*p);
}
