#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: the index to be set, starting from 0
 *
 * Return: 1 if it worked, -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 0;

	if (index > (sizeof(index) * 8))
		return (-1);
	k = (1 << index);
	*n = *n | k;
	return (1);
}

