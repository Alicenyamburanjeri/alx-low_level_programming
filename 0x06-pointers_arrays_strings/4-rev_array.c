#include "main.h"

/**
 * reverse_array - function that reverses the
 * content of an array of integers.
 * @a: int pointer
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int buff[1000];
	int i = 0, k;

	while (i < n)
	{
		buff[i] = a[i];
		i++;
	}
	for (k = 0; k < n; k++)
	{
		a[k] = buff[i - 1];
		i--;
	}
}
