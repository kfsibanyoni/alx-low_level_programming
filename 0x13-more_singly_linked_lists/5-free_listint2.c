#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: double ptr to starting node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (!head)
		return;
	if (*head)
	{
		tmp = *head;
		*head = NULL;
		free_listint(tmp);
		return;
	}
}
