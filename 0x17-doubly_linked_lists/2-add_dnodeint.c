#include "lists.h"

/**
 * add_dnodeint - function that adds new node at beginning of dlistint_t list
 * @head: pointer to pointer of head address of list (i.e. the list)
 * @n: int data to be added at the head
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	free(new_node);
}
