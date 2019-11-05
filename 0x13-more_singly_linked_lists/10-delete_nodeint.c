#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at index
 * @head: Address of the node of the singly linked list
 * @index: Index to insert at
 * Return: A pointer to head
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *new = *head;
	listint_t *nextNode;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	for (i = 0; new != NULL && i < index - 1; i++)
		new = new->next;

	if (new == NULL || new->next == NULL)
		return (-1);

	nextNode = new->next->next;
	free(new->next);

	new->next = nextNode;
	return (1);
}
