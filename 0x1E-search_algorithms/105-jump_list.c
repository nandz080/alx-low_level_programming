#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in an array of ints using JSA
 *
 * @list: pointer to head of list being searched
 * @size: size of array
 * @value: value of index being searched
 * Return: position  of value i.e. index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, step, jump_size;
	listint_t *node;

	if (list == NULL || size == 0)
		return (NULL);

	jump_size = (size_t)sqrt((double)size);
	index = 0;
	step = 0;

	do {
		node = list;
		step++;
		index = step * jump_size;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)node->index, (int)list->index);

	for (; node && node->index <= list->index; node = node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
	}

	return (NULL);
}
