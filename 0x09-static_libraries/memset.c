#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 *
 * @s: is pointer to a char
 * @b: is a char
 * @n: is an unsigned int
 *
 * Return: Returns the transformed pointer
 *
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
