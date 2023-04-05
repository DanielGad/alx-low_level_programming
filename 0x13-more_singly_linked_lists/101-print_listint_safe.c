#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head node of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count = 0;

    if (head == NULL)
    {
        printf("Error: head is NULL\n");
        exit(98);
    }

    current = head;

    while (current)
    {
        count++;
        printf("[%p] %d\n", (void *)current, current->n);

        /* Move to the next node */
        current = current->next;

        /* If we've reached the head again, break to avoid infinite loop */
        if (current == head)
        {
            printf("Error: loop detected\n");
            exit(98);
        }
    }

    return (count);
}

