#include "lists.h"
/**
 * free_listint - Frees a singly linked list
 * @head: List to free
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
