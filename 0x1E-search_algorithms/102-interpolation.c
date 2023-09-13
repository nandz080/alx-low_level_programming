#include "search_algos.h"

/**
 *interpolation_search - function that  searches for a value in sorted array
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, (high = size - 1); high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);

}
