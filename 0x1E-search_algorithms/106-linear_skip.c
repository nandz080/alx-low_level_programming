#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a skip list
 *
 * @list: input list
 * @value: value being searched
 * Return: index of value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node;

	if (list == NULL)
		return (NULL);

	node = list;

	do {
		list = node;
		node = node->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)node->index, node->n);
	} while (node->express && node->n < value);

	if (node->express == NULL)
	{
		list = node;
		while (node->next)
			node = node->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)node->index);

	while (list != node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
