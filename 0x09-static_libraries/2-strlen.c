#include "main.h"
<<<<<<< HEAD
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
=======

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
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
