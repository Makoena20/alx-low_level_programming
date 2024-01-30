#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (!h)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    while (temp && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (!temp)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = temp->next;
    new_node->prev = temp;
    if (temp->next)
        temp->next->prev = new_node;
    temp->next = new_node;

    return new_node;
}

