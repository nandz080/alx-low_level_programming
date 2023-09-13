#include "search_algos.h"

/**
 * first_search - func that searches for a value in an array of ints
 * using the BSA
 *
 *
 * @array: input array
 * @size: size of array
 * @value: value of index being  searched
 * Return: position of value i.e. index
 */
int first_search(int *array, size_t size, int value)
{
	size_t middle = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (middle && size % 2 == 0)
		middle--;

	if (value == array[middle])
	{
		if (middle > 0)
			return (first_search(array, middle + 1, value));
		return ((int)middle);
	}

	if (value < array[middle])
		return (first_search(array, middle + 1, value));

	middle++;
	return (first_search(array + middle, size - middle, value) + middle);
}

/**
 * advanced_binary - function that calls to first_search to return index of the
 * number
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value of index being searched
 * Return: position of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int pos;

	pos = first_search(array, size, value);

	if (pos >= 0 && array[pos] != value)
		return (-1);

	return (pos);
}
