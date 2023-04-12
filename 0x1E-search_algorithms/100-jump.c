#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first idex where value is located,
 * or -1 if value is not present in array or if array
 * is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}

