#include "lists.h"

/**
 * listint_len - function that returns num of elements in a linked list
 * @h: list elements
 *
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
