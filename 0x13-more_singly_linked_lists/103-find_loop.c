#include "lists.h"

/**
 * *find_listint_loop - finds the loop
 * @head: pointer to first node
 *
 * Return: address of node where loop
 * starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (head && fast && fast->next)
	{
		head = head->next;
		fast = fast->next->next;

		if (head == fast)
		{
			head = slow;
			slow = fast;
			while (1)
			{
				fast = slow;
				while (fast->next != head && fast->next != slow)
				{
					fast = fast->next;
				}
				if (fast->next ==  head)
				{
					break;

					head = head->next;
				}
			}
			return (fast->next);
		}
	}
	return (NULL);
}
