#include "main.h"
#include <unistd.h>
/**
 * _putchar - write  character c to stdout
 * @c: The character to print
 *
 * Return: 1 should be returned if success
 * On error, return -1, set errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
