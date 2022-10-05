#include "main.h"

/**
 * _strncpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char.
 *
 * @src: is a pointer to a char.
 *
 * @n: is a pointer to an int.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = i; i < n; i++)
		dest[i] = '\0';

return (dest);
}
