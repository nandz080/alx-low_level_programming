#include "search_algos.h"

/**
  * bi_search - function that searches for a value in a sorted array
  * of ints using binary search.
  * @array: pointer to the first element of the array to search.
  * @low: starting index of the [sub]array to search.
  * @high: ending index of the [sub]array to search.
  * @value: value of index being  searched
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  */
int bi_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - func that searches for a value in a sorted array of
  * ints using exponential search.
  * @array: pointer to the first element of the array to search.
  * @size: size of array.
  * @value: value of index being searched
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  **/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (bi_search(array, i / 2, high, value));
}
