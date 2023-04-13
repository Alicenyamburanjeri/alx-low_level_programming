#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of int using interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if
 * value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos = 0;

	if (!array)
		return (-1);

	while ((array[high] != array[low]) &&
	       (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}

