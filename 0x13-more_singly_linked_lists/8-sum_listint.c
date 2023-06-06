#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to start of list
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int add;

	if (head == NULL)
		return (0);

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
