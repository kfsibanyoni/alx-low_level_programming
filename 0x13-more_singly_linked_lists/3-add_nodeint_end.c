#include "lists.h"

/**
 * add_nodeint_end - add new node to end of list
 *
 * @head: starting node
 * @n: new node data
 *
 * Return: the address of the new element
 * NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *to_end = malloc(sizeof(listint_t));
	listint_t *last = *head;

	to_end->n = n;
	to_end->next = NULL;

	if (*head == NULL)
	{
		*head = to_end;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = to_end;
	return (to_end);
}
