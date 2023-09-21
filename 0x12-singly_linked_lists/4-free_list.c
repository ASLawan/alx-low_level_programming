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

	temp = head;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}


}
