#include "main.h"

/**
 * _memecpy - copies n bytes from memory
 * area src to memory area dest
 * @src: pointer
 * @dest: pointer
 * @n: unsigned int
 *
 * Return: transformed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
