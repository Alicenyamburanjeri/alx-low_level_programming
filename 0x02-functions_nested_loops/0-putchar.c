#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints putchar followed by
 * a new line
 *
 * Return: 0
 */
int _putchar(char c)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
