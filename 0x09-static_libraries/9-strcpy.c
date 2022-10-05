#include "main.h"
<<<<<<< HEAD
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
=======

/**
 * _strcpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char
 *
 * @src: is a pointer to a char
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
char buff[1000];
int i = 0, j, pos = 0;

while (*(src + i) != '\0')
{
	buff[i] = *(src + i);
	i++;
}

for (j = 0; *(src + j) != '\0' ; j++)
{
	*(dest + pos) = buff[j];
	pos++;
}
dest[j] = '\0';
>>>>>>> 541acbebf774f3283784335495d080035b099aad
return (dest);
}
