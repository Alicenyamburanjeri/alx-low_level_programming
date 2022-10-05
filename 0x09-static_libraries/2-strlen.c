#include "main.h"

/**
 * _strlen - swaps integers with pointers.
 *
 * @s: is pointer to an char.
 * char: is a data type.
 * Return: Always 0.
 */
int _strlen(char *s)
{
int c = 0;

while (*(s + c) != '\0')
c++;

return (c);
}
