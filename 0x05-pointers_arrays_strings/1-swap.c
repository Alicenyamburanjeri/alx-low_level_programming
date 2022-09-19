#include "main.h"

/**
 * swap_int - swaps the values of 2 ints
 * @a: one of the ints
 * @b: the other int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
