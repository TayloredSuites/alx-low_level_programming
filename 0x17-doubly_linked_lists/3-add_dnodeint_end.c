#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of head address
 * @n: integer data to be added to node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *inserted_node;
	dlistint_t *temp; 
	/* Temp is a temporary head for traversing *//

	inserted_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	temp = *head;
	/* Cases for node to be inserted */
	if (inserted_node == NULL)
	{
		return (NULL);
		free(inserted_node);
		free(*head);
	}
	/* If it isn't NULL, fill it wth scanf or get values */
	inserted_node->n = n;
	inserted_node->prev = temp->next;
	inserted_node->next = NULL;
	/* Case for function variable of head pointer */
	if (*head == NULL)
	{
		return (NULL);
	}
	/* Condition for traversal */
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = inserted_node;
	return (inserted_node);
	free(inserted_node);
}
