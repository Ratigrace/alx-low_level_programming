#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: double pointer to the list_t list
 * @str: string to insert in the new node
 *
 * Return:  the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	 newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	 newNode->str = strdup(str);
	 newNode->len = len;
	 newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
