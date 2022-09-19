#include <stdio.h>
#include "main.h"

/**
 * print_array - prints arrays
 * @a: pointer to an int
 * @n: number of elements of the array to
 * be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j <= (n - 1); j++)
	{
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	}
	printf("\n");
}

