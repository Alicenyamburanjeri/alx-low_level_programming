#include "main.h"

/**
 * _puts - swaps integers with pointers.
 *
 * @str: is pointer to a char.
 *
 * char: is a data type.
 * Return: Always 0.
 */
void _puts(char *str)
{
int c = 0;

while (*(str + c) != '\0')
{
_putchar(*(str + c));
c++;
}_putchar('\n');
}
