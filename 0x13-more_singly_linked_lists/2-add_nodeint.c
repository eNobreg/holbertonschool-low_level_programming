#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: Main passed in
 * @n: number to coy
 * Return: Always new
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	if (*head == NULL)
	{
		return (NULL);
	}

	return (new);
}
