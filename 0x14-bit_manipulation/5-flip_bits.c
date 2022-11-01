#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = 0;
	unsigned long int c = n ^ m;

	while (c)
	{
		d += (c & 1);
		(c >>= 1);
	}
	return (d);
}

