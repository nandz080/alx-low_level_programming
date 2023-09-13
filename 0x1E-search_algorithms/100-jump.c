#include "search_algos.h"

/**
 * jump_search - function that searches for a value in sorted array of int
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value of index being searched
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, prev, jump;

	if (array == NULL || size == 0)
		return (-1);

	prev = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += prev;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
