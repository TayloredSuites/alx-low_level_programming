#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head: pointer to the first element of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* temp created to leave head pointing to the first element of list */
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
