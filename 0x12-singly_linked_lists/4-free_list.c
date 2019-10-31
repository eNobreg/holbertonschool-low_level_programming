#include "lists.h"
/**
 * free_list - Free nodes of a list
 * @head: Node passed to function
 * Return: Never
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}


}
