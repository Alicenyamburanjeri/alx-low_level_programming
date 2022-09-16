#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable name
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
