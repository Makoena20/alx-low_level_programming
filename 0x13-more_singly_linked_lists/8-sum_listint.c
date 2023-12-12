#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Calculate the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list. If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    /* Traverse the list and add each data to the sum */
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}

