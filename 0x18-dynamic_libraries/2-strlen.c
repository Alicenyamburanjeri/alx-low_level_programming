#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 * char - data type
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
