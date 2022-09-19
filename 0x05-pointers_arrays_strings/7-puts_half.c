#include "main.h"

/**
 * puts_half - swaps int with pointers
 * @str: pointer to char
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j, length, newstart;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	length = i;
	if (length % 2 == 0)
	{
		newstart = length / 2;
	}
	else
	{
		newstart = (length - 1) / 2;
	}
	j = length - newstart;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
