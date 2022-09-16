#include "main.h"

/**
 * print_diagonal - function that draws a
 * diagonal line on the terminal.
 * @n: number of times character \ should
 * be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(92);
			else if (i > j)
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
