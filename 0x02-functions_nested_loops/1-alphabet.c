#include "main.h"

/**
 * print_alphabet - Prints letters in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char lowers;

	for (lowers = 'a'; lowers <= 'z'; lowers++)
		_putchar(lowers);
	_putchar('\n');
}
