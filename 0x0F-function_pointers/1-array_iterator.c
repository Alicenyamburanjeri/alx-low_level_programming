#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an int
 * @array: int pointer
 * @action: function pointer
 * @size: array size
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
