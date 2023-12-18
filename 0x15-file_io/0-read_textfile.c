#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t num_read, num_written;
    char *buffer;
    FILE *file;

    if (filename == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        fclose(file);
        return (0);
    }

    num_read = fread(buffer, sizeof(char), letters, file);
    num_written = fwrite(buffer, sizeof(char), num_read, stdout);

    if (num_read != num_written)
    {
        free(buffer);
        fclose(file);
        return (0);
    }

    free(buffer);
    fclose(file);
    return (num_read);
}
