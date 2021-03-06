#include "lists.h"
/**
 * sum_dlistint - prints every element within a node of a single linked list
 * @head: List node passed in
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{

	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
