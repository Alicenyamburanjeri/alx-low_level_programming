#include "main.h"
<<<<<<< HEAD
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
=======

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
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
