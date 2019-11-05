#include "lists.h"
/**
 * reverse_listint - reverses a list of ints
 * @head: Nodes
 * Return: Always current
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *current = *head;

	if (head == NULL)
		return (NULL);

	current = *head;
	next = NULL;

	while (current->next)
	{
		next = current->next;
		current->next = next->next;
		next->next = (*head);
		*head = next;
	}
	return (*head);
}
