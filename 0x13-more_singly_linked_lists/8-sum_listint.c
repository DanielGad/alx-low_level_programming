#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of all the integers stored in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head; /* pointer to the current node */

	/* Traverse the list and add up the integers stored in each node */
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}

