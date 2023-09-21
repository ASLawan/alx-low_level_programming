#include "lists.h"

/**
 * *add_node - adds new node at the beginning
 * @head: pointer to first node
 * @str: string argument
 *
 * Return: address of the new node otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	/*create new node*/
	list_t *new_node;

	/*allocate memory to new node*/
	new_node = malloc(sizeof(list_t));

	/*verify the allocated memory*/
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*duplicate the given string*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*get the length 0f the string*/
	new_node->len = strlen(new_node->str);

	/*set new node pointer to point to first node*/
	new_node->next = *head;

	/*set head to point to new node*/
	*head = new_node;

	return (new_node);

}
