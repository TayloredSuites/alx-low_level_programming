#include "lists.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to string under consideration
 *
 * Return: Always 0 (Success
 */
int _strlen(const char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

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
	/* Cases for function variables */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Case for the node to be inserted */
	if (inserted_node == NULL)
	{
		return (NULL);
		free(inserted_node);
	}
	/* If it isn't NULL fill it up with scanf or gets values */
	inserted_node->str = strdup(str);
	inserted_node->len = length;
	inserted_node->next = NULL;
	/* Case for function variable of head pointer */
	if (*head == NULL)
	{
		return (NULL);
		free(*head);
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
