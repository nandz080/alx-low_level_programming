#include "search_algos.h"

/**
 * jump_search - function that searches for a value in sorted array of int
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value of index being searched
 * Return: the first position where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int index, step, jump_size, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = (int)sqrt((double)size);
	step = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		step++;
		prev = index;
		index = step * jump_size;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
