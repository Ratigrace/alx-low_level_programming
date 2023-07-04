#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to the first node
 *
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int info;

	if (*head == NULL)
		return (0);

	info = (*head)->n;
	*head = (*head)->next;
	free(*head);
	*temp = head;

	return (info);
}
