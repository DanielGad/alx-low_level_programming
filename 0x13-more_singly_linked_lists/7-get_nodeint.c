#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /* counter for the nodes visited */
	listint_t *current = head; /* pointer to the current node */

	/* Traverse the list until we reach the desired node or the end of the list */
	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	/* If we reach this point, the desired node does not exist */
	return (NULL);
}

