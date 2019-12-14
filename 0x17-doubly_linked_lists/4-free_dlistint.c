#include "lists.h"
/**
 * free_dlistint - Frees a singly linked list
 * @head: List to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
