#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        count++;
        temp = current;
        current = current->next;

        /* Check if we visited this node before */
        if (temp <= current)
        {
            *h = NULL; /* Set head to NULL to avoid accidental use */
            break;
        }

        free(temp);
    }

    *h = NULL; /* Set head to NULL to be safe */
    return (count);
}

