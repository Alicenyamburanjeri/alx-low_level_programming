#include "main.h"
<<<<<<< HEAD
/**
*  _strncpy - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
=======

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
>>>>>>> 541acbebf774f3283784335495d080035b099aad

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

<<<<<<< HEAD
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
=======
	for (i = i; i < n; i++)
		dest[i] = '\0';

return (dest);
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
