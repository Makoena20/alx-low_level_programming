#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to a pointer to a char (string)
 * @to: pointer to a char (string) to set the value of @s to
 */
void set_string(char **s, char *to)
{
    *s = to;
}

