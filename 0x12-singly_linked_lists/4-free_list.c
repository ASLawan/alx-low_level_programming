#include "lists.h"

/**
 * free_list - frees memory
 * @head: pointer to list nodes
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	/*declare a temporal node, use it to traverse and free the list */
	list_t *temp;
	list_t *next;

	temp = head;

	/*check if list is empty*/
	if (head == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
