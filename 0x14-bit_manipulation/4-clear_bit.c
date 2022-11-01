#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: unsigned long int
 * @index: the index
 *
 * Return: 1 if worked, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 0;

	if (index > (sizeof(index) * 8))
		return (-1);
	p = (1 << index);
	*n = *n & ~p;
	return (1);
}
