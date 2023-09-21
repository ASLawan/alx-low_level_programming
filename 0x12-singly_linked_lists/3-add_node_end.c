#include "lists.h"

/**
 * *add_node_end - adds new at end of list
 * @head: pointer to firt node
 * @str: string to be added
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*create a new node*/
	list_t *new_node;
	list_t *temp;

	/*allocate new node memory*/
	new_node = malloc(sizeof(list_t));

	/*verify allocation*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*duplicate string*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*set length of string*/
	new_node->len = strlen(new_node->str);

	/*set pointer of new node to NULL*/
	new_node->next = NULL;
	/*check if list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*declare temporal pointer and traverse list to add new node*/
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*set the last node to point to new node*/
	temp->next = new_node;
	return (new_node);
}

