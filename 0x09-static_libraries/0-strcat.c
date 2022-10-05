#include "main.h"

<<<<<<< HEAD
/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
=======
int _strlen(char *s);

/**
 * _strcat - This function concatenates two strings.
 *
 * @dest: is a pointer to a char.
 * @src: is a pointer to a char.
 *
 * Return: Always 0.
>>>>>>> 541acbebf774f3283784335495d080035b099aad
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
=======
int i = _strlen(dest), j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

return (dest);
}

/**
 * _strlen - this function measures a string leght.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0
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
