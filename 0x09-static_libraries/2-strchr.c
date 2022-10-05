#include "main.h"

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
}
