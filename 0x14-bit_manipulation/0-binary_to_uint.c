#include "main.h"

/**
 * binary_to_uint - is a function that converts binary to
 * unsigned integer
 * @b: is a constant char
 *
 * Return: converted number else 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;

		if (b[i] == '1')
			n += 1;
		else
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		}
	}
	return (n);
}
