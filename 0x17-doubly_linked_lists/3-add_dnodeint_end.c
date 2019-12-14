#include "lists.h"
#include <string.h>
/**
 * add_dnodeint_end - adds a node
 * @head: Main passed in
 * @n: string to copy
 * Return: Always new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

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
		new->prev = last;
	}
	return (new);
}
