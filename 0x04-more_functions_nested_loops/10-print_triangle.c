#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j <= size; j++)
		{
			if (i > j)
			{
				if (j == 0)
				{
				}
				else
					_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

