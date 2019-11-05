#include "lists.h"
/**
 * free_listint - Frees a singly linked list
 * @head: List to free
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	while (*head != NULL)
	{
		new = *head;
		*head = new->next;
		free(new);
	}
	*head = NULL;
}
