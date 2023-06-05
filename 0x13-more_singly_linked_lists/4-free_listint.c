#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: pointer to starting node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = head->next;

		free(list);
	}
}
