#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * print_numbers - print numbers followed by a new line
 * @n: number of int passed to the function
 * @separator: string to be printed between numbers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
int val;
va_list ls;

va_start(ls, n);

for (i = 0; i < n; i++)
{
val = va_arg(ls, int);

printf("%d", val);
if (separator != NULL)
{
if (i != (n - 1))
printf("%s", separator);
}
}
printf("\n");

va_end(ls);
return;
}
