#include "main.h"

/**
<<<<<<< HEAD
=======
 * _puts_recursion - prints a string
 * @s: pointer to a char
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
>>>>>>> 7a6fb6ee3a6e2ca43c2b52521bf5d062653ca290
