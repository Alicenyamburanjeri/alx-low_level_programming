#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
=======
 * print_all - prints anything
 * @format: any variable type
 * Return: Nothing
>>>>>>> 46bd9b225c8334a4b8e0d532692ee4698e7053e2
 */

void print_all(const char * const format, ...)
{
<<<<<<< HEAD
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(valist, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(valist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(valist, double), sep);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
=======
	unsigned int i = 0, j = 0;
	char *str;

	va_list ls;

	va_start(ls, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ls, int));
				break;
			case 'i':
				printf("%i", va_arg(ls, int));
				break;
			case 'f':

				printf("%f", va_arg(ls, double));
				break;
			case 's':
				str = va_arg(ls, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		j = i + 1;
		while (format[j] && (format[j] == 'c' ||
					format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ls);
>>>>>>> 46bd9b225c8334a4b8e0d532692ee4698e7053e2
}
