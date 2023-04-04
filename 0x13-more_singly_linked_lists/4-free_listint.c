#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first element in the list to be freed
 *
 * Description: This function frees a linked list by iterating through
 * the nodes and freeing each node.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

