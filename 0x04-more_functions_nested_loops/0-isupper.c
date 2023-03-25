#include "main.h"

/**
 * _isupper -checks for lowercase character
 * @c:The character to be checked
 * Return: 1for uppercase character or 0 for anything else
 */

int _isupper(int c)
{
if (c >= 'c' && c <= 'z')
return (1);
else
return (0);
}
