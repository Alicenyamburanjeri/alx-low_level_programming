#include "main.h"
<<<<<<< HEAD
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s of any of the bytes in
*the string accept
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
=======

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; s[i] != 0; i++)
		for (j = 0; accept[j] != 0; j++)
			if (s[i] == accept[j])
				return ((s + i));

return (0);
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
