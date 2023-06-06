#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: starting node
 *
 * Return: the head node’s data (n)
 * 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *lead;

	if (!(*head) || !head)
		return (0);

	lead = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = lead;

	return (x);
}
