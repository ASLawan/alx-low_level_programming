#include "lists.h"

/**
 * free_list - frees memory
 * @head: pointer to first node
 *
 * Return: nothing
 */
void free_list(ptrs_t **head)
{
	ptrs_t *temp;
	ptrs_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints all nodes in the list
 * @head: pointer to first node
 *
 * Return: number of nodes if success, 98 otherwise
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	ptrs_t *head_ptr, *new_node, *add_node;

	head_ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(ptrs_t));
		if (new_node == NULL)
		{
			exit(98);
		}
		new_node->p = (void *)head;
		new_node->next = head_ptr;
		head_ptr = new_node;

		add_node = head_ptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_list(&head_ptr);
				return (num_nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}
	free_list(&head_ptr);

	return (num_nodes);
}
