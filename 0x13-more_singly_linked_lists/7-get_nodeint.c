#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current = head;

    while (current != NULL)
    {
        if (i == index)
            return (current);

        current = current->next;
        i++;
    }

    return (NULL);  /* Node at the given index does not exist */
}

