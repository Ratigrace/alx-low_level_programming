#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds new element at start of list
 * @head: pointer
 * @n: element in list
 * Return: new Element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

