#include "lists.h"
#include "_strlen.c"

/**
 * add_node - adds a node at the start of a list
 *
 * @head: double pointer to start of list
 * @str: string to duplicate
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* allocate memory for new node */
	list_t *new_lead = malloc(sizeof(list_t));

	/* put in new data */
	new_lead->str = strdup(str);
	new_lead->len = _strlen(str);
	new_lead->next = (*head);
	(*head) = new_lead;

	return (new_lead);
}
