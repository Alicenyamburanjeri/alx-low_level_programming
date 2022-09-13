#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: Number to be tested
 *
 * Return: n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
