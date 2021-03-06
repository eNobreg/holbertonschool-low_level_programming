#include "lists.h"
/**
 * add_dnodeint - adds a node
 * @head: Main passed in
 * @n: number to coy
 * Return: Always new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		current->prev = new;
	*head = new;
	if (*head == NULL)
		return (NULL);

	return (new);
}
