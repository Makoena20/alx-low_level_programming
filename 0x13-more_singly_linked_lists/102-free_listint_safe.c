#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *temp;
    size_t size = 0;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current != NULL)
    {
        size++;
        temp = current;
        current = current->next;

        /* Set the pointer to NULL before freeing to avoid double-free issues */
        temp->next = NULL;
        free(temp);
    }

    *h = NULL; /* Set the head to NULL after freeing the list */
    return (size);
}

