#include "lists.h"
/**
 * reverse_listint - reverses a list of ints
 * @head: Nodes
 * Return: Always current
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL, *current;

	if (head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		current = current->next;
		current = (*head)->next;

		(*head)->next = new;
		new = *head;
		*head = current;

	}
	*head = new;
	return (*head);
}
