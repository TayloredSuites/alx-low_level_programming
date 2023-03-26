#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of head node
 * @idx: index of list where new node should be added (position)
 * @n: the new data to be added
 *
 * Return: address of new node as type struct (->next)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int length_l;
	unsigned int i;

	/* Length_l is the length of the linked list */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	length_l = len(*head);
	if (idx > length_l)
	{
		return (NULL);
	}
	else
	{
		/* Int represents an increment of iteration */
		temp = *head;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		new_node->n = n;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
