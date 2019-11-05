#include "lists.h"
/**
 * print_listint - prints every element within a node of a single linked list
 * @h: List node passed in
 * Return: Count of what was printed.
 */
size_t print_listint(const listint_t *h)
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
