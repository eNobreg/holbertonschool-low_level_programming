#include "lists.h"
/**
 * get_nodeint_at_index - prints element at index
 * @head: List node passed in
 * @index: Index to print at
 * Return: Null or head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
