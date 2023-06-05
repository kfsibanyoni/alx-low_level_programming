#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: elements in list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *node = h;

	for (count = 0; node != NULL; count++)
	{
		if (node->n)
			printf("%d\n", node->n);

		node = node->next;
	}

	return (count);
}
