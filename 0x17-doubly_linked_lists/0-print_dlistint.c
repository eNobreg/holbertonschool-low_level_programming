#include "lists.h"
/**
 * print_dlistint - prints every element within a node of a single linked list
 * @h: List node passed in
 * Return: Count of what was printed.
 */
size_t print_dlistint(const dlistint_t *h)
{

	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
