#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head: pointer to the first element of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* temp created to have a first node pointer for a first node */
	while  (head)
	{
		/* Create base case for copycat temp */
		temp = head;
		/* Shift head away to next node */
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
