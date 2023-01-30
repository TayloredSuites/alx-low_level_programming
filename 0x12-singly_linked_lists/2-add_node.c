#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head pointer of the list
 * @str: string that needs to be duplicated
 *
 * Return: address of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	

	new_node = (list_t*)malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
