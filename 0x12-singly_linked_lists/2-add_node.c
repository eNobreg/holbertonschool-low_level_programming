#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node
 * @head: Main passed in
 * @str: string to copy
 * Return: Always new
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[i++])
		;
	i--;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	if (*head == NULL)
	{
		return (NULL);
	}

	return (new);
}
