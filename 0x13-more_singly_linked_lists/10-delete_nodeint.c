#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the pointer of the head node
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
        return -1;

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;
    }

    current = *head;
    for (i = 0; i < index - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return -1;

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return 1;
}

