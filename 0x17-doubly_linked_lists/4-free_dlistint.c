#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;

    while (current != NULL)
    {
        dlistint_t *next_node = current->next;
        free(current);
        current = next_node;
    }
}

