#include "lists.h"
/**
 * dlistint_len - prints every element within a node of a single linked list
 * @h: List node passed in
 * Return: Count of what was printed.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 1;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i - 1);
}
