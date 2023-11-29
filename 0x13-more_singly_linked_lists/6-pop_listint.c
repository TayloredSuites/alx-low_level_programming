#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the pointer of the head node
 *
 * Return: head node’s data (n), if linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value_n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	value_n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (value_n);
}
