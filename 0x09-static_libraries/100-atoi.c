<<<<<<< HEAD
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *i);
=======
#include "main.h"
#include <stdio.h>
/**
 * _atoi - print the integer of a char.
 * @s:  tested char
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int counter, i, j, k, length, num, l;
	int aux;

	aux = 1;
	counter = 0;
	num = 0;

	while (*(s + counter) != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		break;
	}
	for (j = i; j < counter; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}

	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			aux = -aux;
	}
	length = j - i;
	l = i;
		while (length >= 1)
	{
		num = num * 10 + (*(s + l) - '0');
		l++;
		length--;
	}
	return (num * aux);
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
