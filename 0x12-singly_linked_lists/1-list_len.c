#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list
 * @h: pointer to the head node
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	if (h == NULL)
	{
		printf("Non-existent list");
	}
	else
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
