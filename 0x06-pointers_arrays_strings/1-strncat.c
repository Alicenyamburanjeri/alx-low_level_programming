#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: an int
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest), j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

return (dest);
}

/**
 * _strlen - measures string length
 * @s: pointer to a char
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
