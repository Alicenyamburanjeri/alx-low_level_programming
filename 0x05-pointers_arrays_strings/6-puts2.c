#incude "main.h"
#include <stdio.h>

/**
 * puts2 - prints characters
 * @str: pointer to char
 * char: data type
 * Return: nothing
 */
void puts2(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		if (j % 2 == 0)
			_putchar(*(str + j));
		j++;
	}
	_putchar(10);
}
