#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 *
 * @head: pointer to starting node
 * @n: int to add
 *
 * Return: the address of the new element
 * NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_int = malloc(sizeof(listint_t));

	new_int->n = n;
	new_int->next = *head;
	*head = new_int;

	return (new_int);
}
