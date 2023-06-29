#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: list_t list to be freed
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
