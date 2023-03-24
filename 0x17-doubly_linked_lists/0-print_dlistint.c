#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to address of head node
 *
 * Return - no of nodes of size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;

	/* h = (struct d_listint_t*)malloc(sizeof(struct dlistint_t)); */

	num_nodes = 0;
	while (h != NULL)
	{
		num_nodes++;
		printf("%d\n", n);
		h = h->next;
		/* increment no nodes then go to next if not NULL */
	}
	return (num_nodes);
}
