#include "main.h"

/**
 * _abs - computes the absolute
 * value of an int
 * @a: number to be tested
 *
 * Return: 0 if success
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
	return (0);
}
