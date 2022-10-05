#include "main.h"
<<<<<<< HEAD
/**
*_memcpy - The _memcpy() function copies n bytes
* from memory area src to memory area dest
*@dest:area where bytes are copied to
*@src:area where bytes are copied from
*@n:number of bytes to copy
*Return: returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

=======

/**
 * _memcpy - This function fills memory with a constant byte
 *
 * @dest: is a pointer to a char
 * @src: is a pointer to a char
 * @n: is an unsigned int
 *
 * Return: Returns the transformed pointer
 *
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
>>>>>>> 541acbebf774f3283784335495d080035b099aad
