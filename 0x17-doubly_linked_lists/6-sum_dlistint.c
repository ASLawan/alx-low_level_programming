#include "lists.h"
/**
 * sum_dlistint - computes sum of all data
 * @head: pointer to first node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
		temp = head;
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
