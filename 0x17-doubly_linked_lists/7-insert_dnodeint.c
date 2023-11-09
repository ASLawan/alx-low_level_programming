#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer to first node
 * @idx: index to insert node at
 * @n: data to insert
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;
	unsigned int i;

	/*new = NULL;*/
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		temp = *h;
		i = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = (dlistint_t *)malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = temp->next;
						new->prev = temp;
						temp->next->prev = new;
						temp->next = new;
					}
				}
				break;
			}
			temp = temp->next;
			i++;
		}
	}

	return (new);
}
