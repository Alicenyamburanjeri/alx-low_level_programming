#include "main.h"
<<<<<<< HEAD
#include <stddef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
=======

/**
 * _strchr - locates a character in a string.
 *
 * @s: is a pointer to a char
 * @c: is a pointer to a char
 *
 * Return: Return the transformed pointer
 *
**/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
