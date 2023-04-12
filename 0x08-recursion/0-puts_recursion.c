#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> c663c18ff545134d49e5e2df255e82e3d887160f
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
<<<<<<< HEAD
>>>>>>> 7a6fb6ee3a6e2ca43c2b52521bf5d062653ca290
=======
>>>>>>> c663c18ff545134d49e5e2df255e82e3d887160f
