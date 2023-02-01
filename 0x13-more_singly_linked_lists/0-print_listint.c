#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head node
 *
 * Return: number of nodes printing
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;

	/* h = (struct listint_t)malloc(sizeof(struct listint_t)); */

	num_nodes = 0;
	while (h != NULL)
	{
	/* h->n == NULL fails due to pointer not int */
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	/* Increase the num_nodes, print int data,  then go to next node */
	}
	return (num_nodes);
}
