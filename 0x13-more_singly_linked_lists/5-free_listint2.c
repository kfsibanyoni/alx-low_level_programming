#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: double ptr to starting node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t **tmp = head;
	listint_t *id;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			id = *head;
				free(id);

			*head = (*head)->next;
		}

		*tmp = NULL;
	}
}
