#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
