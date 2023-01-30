#include "lists.h"

/**
 * add_node_end - function that adds a new node at end of list_t list
 * @head: pointer to the pointer of the head node of the list
 * @str: the strin gunder consideration for duplication
 *
 * Return: address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *inserted_node;
	list_t *temp; /* temporary head for traversing */

	inserted_node = (list_t *)malloc(sizeof(list_t));
	temp = *head;
	length = _strlen(str);
	/* Traverse to the penultimate node */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* When untrue, make the next temp->next into inserted_node */
	temp->next = inserted_node;
	inserted_node->str = strdup(str);
	inserted_node->len = length;
	/* Creating end node termination */
	inserted_node->next = NULL;
	return (inserted_node);
	free(inserted_node);
}
