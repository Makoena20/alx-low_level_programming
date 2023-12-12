#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The head node’s data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (*head == NULL)
        return 0;

    temp = *head;
    *head = temp->next;
    data = temp->n;
    free(temp);

    return data;
}

