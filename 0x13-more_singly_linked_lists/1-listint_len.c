#include "lists.h"

/**
 * listint _len - function that returns the no of elements in a listint_t list
 * @h: pointer to the head node
 *
 * Return: no of elements of size_t quantity
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;
	const listint_t *temp;

	temp = h;
	elements = 0;
	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
