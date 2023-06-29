#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;

	newNode->next = (*head);

	(*head) = newNode;

	return (*head);
}

