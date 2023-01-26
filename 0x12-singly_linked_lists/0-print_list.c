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

	/* h = (struct list_t*)malloc(sizeof(const list_t)); */

	num_nodes = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		num_nodes++;
	}
	return (num_nodes);
}
