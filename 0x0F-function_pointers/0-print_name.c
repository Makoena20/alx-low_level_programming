#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer that takes a char pointer argument and returns void
 *
 * Description: This function prints a name using the function pointer f
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
