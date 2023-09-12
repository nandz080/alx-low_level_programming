#include "search_algos.h"

/**
 * linear_search - function searches for a value in array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value of index being searched for
 * Return: index of value or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
