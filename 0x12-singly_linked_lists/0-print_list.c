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
	list_t temp;

	/* h = (struct node*)malloc(sizeof(struct node)); */
	temp = h;
	num_nodes = 0;
	while (temp->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (temp != 0)
	{
		num_nodes++;
		printf("[%d] (%s)\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (num_nodes);
}
