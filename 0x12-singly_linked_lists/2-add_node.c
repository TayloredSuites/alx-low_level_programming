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
	list_t *temp;

	/* Temp holds the transversing value of the head */
	*temp = *head;
	/* newnode = (struct list_t*)malloc(sizeof(struct list_t)); */
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
