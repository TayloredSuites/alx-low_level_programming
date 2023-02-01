#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the ponter of th ehead node
 * @index: position on the list
 *
 * Return: Success (1) or failure (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next_node;
	unsigned int i = 1;

	temp = head;
	if (head == NULL)
	{
		return (-1);
		free(head);
	}
	while (i < (index - 1))
	{
		temp = temp->next;
		i++;
		return (1);
	}
	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
}
