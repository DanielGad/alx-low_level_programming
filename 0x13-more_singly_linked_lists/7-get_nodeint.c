#include "lists.h"

/**
 * nth_nodeint - returns the nth node of a linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to the node at the given index, or NULL if it fails
 */
listint_t *nth_nodeint(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current ? current : NULL);
}

