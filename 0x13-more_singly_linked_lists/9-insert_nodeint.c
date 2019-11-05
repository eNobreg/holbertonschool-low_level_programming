#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n);
/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: Address of the node of the singly linked list
 * @idx: Index to insert at
 * @n: data to insert
 * Return: A pointer to head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int cnt = 0;

	if (head == NULL || new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;

	while (current)
	{
		if ((idx - 1) == cnt)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		cnt++;
		current = current->next;
	}

	free(new);
	return (NULL);
}
