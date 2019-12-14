#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: Address of the node of the singly linked list
 * @index: Index to insert at
 * Return: A pointer to head
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	unsigned int i = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		else
			current->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	if (current->next->next != NULL)
	{
		current->next = current->next->next;
		free(current->next->prev);
		current->next->prev = current;
		return (1);
	}
	else
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
