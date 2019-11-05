#include "lists.h"
/**
 * free_listint2 - Frees a singly linked list
 * @head: List to free
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new, new2;

	if (head == NULL)
		return;

	new = *head;

	while (*head != NULL)
	{
		new2 = new;
		*new = new->next;
		free(new2);
	}
	*head = NULL;
}
