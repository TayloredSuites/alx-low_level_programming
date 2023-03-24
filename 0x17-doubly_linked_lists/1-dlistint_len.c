#include "lists.h"

/**
 * dlistint_len -  the number of elements in a linked dlistint_t list
 * @h: pointer to head node address
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;
	const dlistint_t *temp;

	temp = h;
	elements = 0;
	while (temp != NULL)
	{
		elements++;
		temp->next;
	}
	return (elements);
}
