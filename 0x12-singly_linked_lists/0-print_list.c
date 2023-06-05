#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: elements
 *
 * Return: number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	int node_cnt;
	const list_t *node = h;

	for (node_cnt = 0; node != NULL; node_cnt++)
	{
		if (node->str)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");

		node = node->next;
	}

	return (node_cnt);
}
