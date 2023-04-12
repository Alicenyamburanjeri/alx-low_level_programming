#include "main.h"

/**
<<<<<<< HEAD
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
=======
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
>>>>>>> c663c18ff545134d49e5e2df255e82e3d887160f
}
