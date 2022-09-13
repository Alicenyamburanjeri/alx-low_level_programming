#include "main.h"

/**
 * _isalpha - checks if letter is
 * lower or uppercase
 * @c: character being tested
 *
 * Return: 0 for success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
