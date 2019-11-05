#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - adds a node
 * @head: Main passed in
 * @n: string to copy
 * Return: Always new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}
	return (new);
}
