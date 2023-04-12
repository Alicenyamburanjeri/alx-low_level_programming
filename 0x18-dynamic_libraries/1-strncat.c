#include "main.h"

<<<<<<< HEAD
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
=======
int _strlen(char *s);

/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
>>>>>>> c663c18ff545134d49e5e2df255e82e3d887160f
}
