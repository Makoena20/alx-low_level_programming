#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Set the values for the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node as the head */
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    /* Traverse to the last node in the list */
    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    /* Update pointers to add the new node at the end */
    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}

