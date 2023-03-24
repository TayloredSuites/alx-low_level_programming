#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to head node address (i.e. list)
 *
 * Return: a free list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	/* Temp created to traverse the list */

	while (head != NULL && head->next != NULL)
	{
		/* Create base case for copycat temp within loop limits */
		temp = head;
		/* Shift head away to next node */
		head = head->next;
		free(temp->prev);
		free(temp->next);
		free(temp);
	}
}
