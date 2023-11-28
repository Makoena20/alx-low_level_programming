#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the details of a struct dog
 * @d: pointer to the struct dog
 *
 * Description: This function prints the details of a struct dog. If any element of the struct is NULL, it will print "(nil)" instead of the element. If the struct itself is NULL, it will print nothing.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
