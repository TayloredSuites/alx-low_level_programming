#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to head node
 *
 * Return: the number of nodes of type size_t
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	/* h = (struct node*)malloc(sizeof(struct node)); */

	num_nodes = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != 0)
	{
		num_nodes++;
		printf("[%d] (%s)\n", h->len, h->str);
		h = h->next;
	}
	return (num_nodes);
}
