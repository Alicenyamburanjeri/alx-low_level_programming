#include "main.h"

/**
 * rev_string - reverses string
 * @s: points to a string
 * char: data type
 * Return: 0
 */
void rev_string(char *s)
{
	char buff[500];
	int i = 0, j, pos = 0;

	while (*(s + i) != '\0')
	{
		bufff[i] = *(s + i);
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		*(s + pos) = buff[j];
		pos++;
	}
}

