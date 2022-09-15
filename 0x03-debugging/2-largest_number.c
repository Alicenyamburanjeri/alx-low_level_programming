#include "main.h"

/**
 * largest_number - return the largest of
 * the 3 numbers
 * @a: first int
 * @b: second int
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a >= b && b >= c) || (a >= c && c >= b))
	{
		largest = a;
	}
	else if ((b >= a && a >= c) || (b >= c && c >= a))
	{
		largest = b;
	}
	else if ((c >= a && a >= b) || (c >= b && c >= a))
	{
		largest = c;
	}
	else
		largest = c;
	return (largest);
}
