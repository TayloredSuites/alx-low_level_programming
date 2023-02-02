#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head: pointer to the first element of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* temp created to have a pointer to head node for traversal */
	while  (head != NULL && head->str != NULL)
	{
		/* Create base case for copycat temp */
		temp = head;
		/* Shift head away to next node */
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
