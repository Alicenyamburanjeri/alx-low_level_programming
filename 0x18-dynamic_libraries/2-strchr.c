#include "main.h"

/**
 * _strchr - locates a char in a string
 *
 * @s: pointer to a char
 * @c: pointer to char
 *  Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	return (s);

	return (0);
}
