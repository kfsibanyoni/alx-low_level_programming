#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at any given point
 *
 * @head: pointer to starting point
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: node to insert
 *
 * Return: address of the new node
 * NULL if it failed
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int x;

	/* allocate memory */
	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	/* set new data */
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	x = 0;
	while (tmp && x < idx)
	{
		if (x == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;

			return (new);
		}
		else
			tmp = tmp->next;

		x++;
	}

	return (NULL);
}
