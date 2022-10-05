#include "main.h"
<<<<<<< HEAD
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
=======

int _strlen(char *s);

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: is a pointer to a string.
 *
 * @src: is a pointre to a string.
 *
 * @n: is an int
 *
 * Return: Always 0.
>>>>>>> 541acbebf774f3283784335495d080035b099aad
 */

char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
=======
int i = _strlen(dest), j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

return (dest);
}

/**
 *_strlen - Measures the lenght of a string.
 *
 * @s: is a pointer to a char.
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

return (i);
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
