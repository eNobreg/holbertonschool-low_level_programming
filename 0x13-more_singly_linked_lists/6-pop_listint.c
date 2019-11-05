#include "lists.h"
/**
 * pop_listint - Removes the head node and returns the value of it
 * @head: Node
 * Return: Always value
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *new = *head;

	if (new)
	{
		value = new->n;
		*head = new->next;
	}
	free(new);
	return (value);
}
