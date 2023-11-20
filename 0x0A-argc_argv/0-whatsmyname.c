#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /* Check if there is at least one argument (the program name) */
    if (argc > 0)
    {
        /* Print the program name */
        print_program_name(argv[0]);
        return 0;
    }

    return 1; /* Return non-zero on failure */
}

/**
 * print_program_name - Prints the name of the program
 * @program_name: The name of the program
 *
 * This function prints the name of the program followed by a new line.
 */
void print_program_name(char *program_name)
{
    printf("%s\n", program_name);
}
