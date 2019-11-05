#include "lists.h"
/**
 * reverse_listint - reverses a list of ints
 * @head: Nodes
 * Return: Always current
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *current = *head;

	if (head == NULL)
		return (NULL);

	new = NULL;

	while (current->next)
	{
		new = current->next;
		current->next = new->next;
		new->next = (*head);
		*head = new;
	}
	return (*head);
}
