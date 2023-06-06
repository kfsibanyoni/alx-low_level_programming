#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: start node
 * @index: index of the node, starting at 0
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	for (x = 0; x < index; x++)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
	}

	return (node);
}
