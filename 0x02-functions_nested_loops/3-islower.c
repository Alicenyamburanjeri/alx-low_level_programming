#include "main.h"

/**
 * islower - checks for lower
 * case character
 * @c: letter being tested
 *
 * Return: 0 for success
 */
int _islower(int c)
{
	if (c >= 97 && c <== 122)
		return (1);
	else
		return (0);
}
