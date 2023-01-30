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
	if (inserted_node == NULL)
	{
		return (NULL);
	}
	/* Traverse to the penultimate node */
	if (temp->next == NULL)
	{
		free(inserte_node);
	}
	temp = temp->next;
	/* When untrue, make the next temp->next into inserted_node */
	temp->next = inserted_node;
	if (inserted_node->str == NULL)
	{
		free(inserted_node);
	}
	inserted_node->str = strdup(str);
	inserted_node->len = length;
	/* Creating end node termination */
	inserted_node->next = NULL;
	return (inserted_node);
	free(inserted_node);
}
