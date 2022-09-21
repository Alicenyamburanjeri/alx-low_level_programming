#include "main.h"

int _strlen(char *s);

/**
 * _strcat - concatenates two ints
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest), j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
/**
 * _strlen - measures a string length
 *
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
