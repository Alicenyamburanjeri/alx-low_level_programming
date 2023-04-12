#include "main.h"

/**
 * _strcpy - Swaps integers with pointers
 * @dest: pointer to a char
 * @src: pointer to a char
 * char: data type
 * Return: 0
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
	return (dest);
}
