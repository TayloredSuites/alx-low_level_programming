#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to ponter of head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		free(head);
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
