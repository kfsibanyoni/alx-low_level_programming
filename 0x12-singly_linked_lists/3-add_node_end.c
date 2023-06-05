#include "lists.h"
#include "_strlen.c"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: start node
 * @str: string to duplicate
 *
 * Return: the address of the new element
 * NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newLast = malloc(sizeof(list_t));
	list_t *last = *head;

	newLast->str = strdup(str);
	newLast->len = _strlen(str);
	newLast->next = NULL;

	if (newLast == NULL)
		return (NULL);
	/* if list empty make new node the head */
	if (*head == NULL)
	{
		*head = newLast;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newLast;
	return (newLast);
}
