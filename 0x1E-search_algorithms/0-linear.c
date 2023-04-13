#include "search_algos.h"

/**
* linear_search - function that gets the value from array
* @array: pointer to the array to search from
* @size: length of the array
* @value: value or target to find
* Return: if found 1, else -1 if not
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0 || array == NULL)
		return (-1);

	while (i <= size - 1)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
