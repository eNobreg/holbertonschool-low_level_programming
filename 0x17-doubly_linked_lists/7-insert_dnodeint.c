#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: Address of the node of the singly linked list
 * @idx: Index to insert at
 * @n: data to insert
 * Return: Always
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int cnt = 0;

	if (h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current)
	{
		if (current->next == NULL && cnt == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return(new);
		}
		else if ((idx - 1) == cnt)
		{
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		cnt++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
