#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *next = NULL;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

}
