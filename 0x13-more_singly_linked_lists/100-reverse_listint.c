#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next;

    /* Iterate through the list, reversing the pointers */
    while (*head != NULL)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }

    /* Update the head to point to the new first node */
    *head = prev;

    return *head;
}

