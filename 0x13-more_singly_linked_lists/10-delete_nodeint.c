/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *prev, *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = current->next;
        free(current);
        return (1);
    }

    prev = *head;
    current = (*head)->next;
    for (i = 1; i < index; i++)
    {
        if (current == NULL)
            return (-1);
        prev = current;
        current = current->next;
    }

    prev->next = current->next;
    free(current);

    return (1);
}

