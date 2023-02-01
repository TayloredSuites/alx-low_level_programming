#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of the head node
 * @n: integer that is scanf'ed into the function
 *
 * Return: ddress of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *inserted_node;
	listint_t *temp;

	/* Temp is node for traversal */
	temp = *head;
	inserted_node = (listint_t *)malloc(sizeof(listint_t));
	if (inserted_node == NULL)
	{
		return (NULL);
	}
	if (temp = NULL)
	{
		*head = inserted_node;
	}
	inserted_node->next = NULL;
	/* When untrue make the nemp->next into inserted_node */
	while (temp->next != NULL)
	{
		/* Traverse to the penultimate node */
		temp = temp->next;
	}
	temp->next = inserted_node;
	inserted_node->n = n;
	inserted_node->next = NULL;
	return (inserted_node);
}
