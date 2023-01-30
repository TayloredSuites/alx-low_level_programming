#include "lists.h"

/**
 * _strlen - aa function that returns the length of a string
 * @s: string under consideration
 *
 * Return: Always 0 (Success)
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
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head pointer of the list
 * @str: string that needs to be duplicated
 *
 * Return: address of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length;

	new_node = (list_t *)malloc(sizeof(list_t));
	length = _strlen(str);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
