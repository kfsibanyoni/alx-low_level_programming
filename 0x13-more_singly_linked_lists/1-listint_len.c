#include "lists.h"

/**
 * listint_len - returns number of elements in list
 *
 * @h: pointer
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
