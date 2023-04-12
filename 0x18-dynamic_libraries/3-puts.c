#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: pointer to char
 * char: data type
 * Return: 0
 */
void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
