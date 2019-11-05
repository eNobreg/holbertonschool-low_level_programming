#include "lists.h"
/**
 * listint_len - prints every element within a node of a single linked list
 * @h: List node passed in
 * Return: Count of what was printed.
 */
size_t listint_len(const listint_t *h)
{

	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
