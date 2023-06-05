#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to first element
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		if (head->str)
			free(head->str);

		list = head;
		head = head->next;

		free(list);
	}
}
