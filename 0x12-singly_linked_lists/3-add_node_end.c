#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node
 * @head: Main passed in
 * @str: string to copy
 * Return: Always new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *last;

	if (new == NULL)
		return (NULL);

	while (str[i++])
		;
	i--;

	new->str = strdup(str);
	new->len = i;
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
