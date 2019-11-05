#include "lists.h"
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
	listint_t *current = *head;


	new->n = n;
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;

		return (new);
	}
	while (idx - 1 > 0)
	{
		current = current->next;
		idx--;
	}
	new->next = current->next;
	current->next = new;

	return (*head);
}
