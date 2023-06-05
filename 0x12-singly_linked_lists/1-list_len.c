#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *node = h;

	for (count = 0; node != NULL; count++)
		node = node->next;

	return (count);
}
