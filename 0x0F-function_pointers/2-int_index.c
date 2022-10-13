#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: name
 * @size: Number of iterations
 * @cmp: function pointer
 * Return: -1 if no element matches, size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
