#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints str followed by a new line
 * @separator: str to be printed btwn strings
 * @n: num of str passed to function
 *
 * Return: 0
 */

void print_strings(const *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *val;

	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(ls, char *);
		if (val != NULL)
			printf("%s", val);
		else
			printf("(nil)");

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



