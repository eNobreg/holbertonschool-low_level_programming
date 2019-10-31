#include "lists.h"
/**
 * list_len - lists node
 * @h: Passed value
 * Return: count of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);

}
