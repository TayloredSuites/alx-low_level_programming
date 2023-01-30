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
	const list_t *temp;

	temp = h;
	elements = 0;
	if (temp == NULL)
	{
		printf("Non-existent list");
	}
	else
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
